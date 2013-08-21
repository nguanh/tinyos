
function hex2dec(h,i,x,v){
  h=tolower(h);sub(/^0x/,"",h)
  for(i=1;i<=length(h);++i){
    x=index("0123456789abcdef",substr(h,i,1))
    if(!x)return "NaN"
    v=(16*v)+x-1
  }
  return v
}

function orinoco(s) {
  # AM header info are 8 byte
  # length is stored in sixth byte
  # orinoco currently uses 20 extra bytes at packet's end
  s = 1 + 8 + hex2dec($6) - 20;

  # orinoco
  oOrigin  = 256*hex2dec($(s++)) + hex2dec($(s++));    # orinoco origin
  oSeqno   = hex2dec($(s++));                          # orinoco seqno
  oHopCnt  = hex2dec($(s++));                          # orinoco hop count
  oType    = hex2dec($(s++));                          # orinoco packet type
  hop1     = hex2dec($(s++));
  hop2     = hex2dec($(s++));
  hop3     = hex2dec($(s++));
  hop4     = hex2dec($(s++));
  hop5     = hex2dec($(s++));
  hop6     = hex2dec($(s++));
  hop7     = hex2dec($(s++));
  oTime    = 256*(256*(256*hex2dec($(s++))+hex2dec($(s++)))+hex2dec($(s++)))+hex2dec($(s++));
  oDelay   = 256*(256*(256*hex2dec($(s++))+hex2dec($(s++)))+hex2dec($(s++)))+hex2dec($(s++));

  return oOrigin"\t"oSeqno"\t"oHopCnt"\t"hop1"\t"hop2"\t"hop3"\t"hop4"\t"hop5"\t"hop6"\t"hop7"\t"oType"\t"oTime"\t"oDelay;
}

# main part
# must comply with Reporting.h
# and corresponding message type definitions
#/[[:xdigit:]]/ {
/^00/ {
  node     = hex2dec($5);   # node id
  type     = hex2dec($8);   # packet type
  odata    = orinoco();     # read orinoco header

  # CID_ENERGY_REPORT
  if (type == 13) {
    seqno    = 256*hex2dec($9)+hex2dec($10);          # packet seqno (one every 30 sec)
    Vcap     = hex2dec($11)+hex2dec($12)/256.0;       # cap voltage (V)
    Isolar   = hex2dec($13)+hex2dec($14)/256.0;       # solar current (mA)
    light    = 256*hex2dec($15)+hex2dec($16);         # brightness (raw)
    temp     = hex2dec($17)+hex2dec($18)/256.0;       # temperature (degree celsius)
    if (temp >= 128) temp -= 256;
    eMCU     = 256*(256*(256*hex2dec($19)+hex2dec($20))+hex2dec($21))+hex2dec($22);    # energy MCU
    eRadio   = 256*(256*(256*hex2dec($23)+hex2dec($24))+hex2dec($25))+hex2dec($26);    # energy Radio
    eLeds    = 256*(256*(256*hex2dec($27)+hex2dec($28))+hex2dec($29))+hex2dec($30);    # energy Leds
    epWaste  = 256*(256*(256*hex2dec($31)+hex2dec($32))+hex2dec($33))+hex2dec($34);    # time wasted for energy counting
    Vref     = hex2dec($35)+hex2dec($36)/256.0;       # cap voltage (V)

    data = seqno"\t"Vcap"\t"Isolar"\t"temp"\t"light"\t"eMCU"\t"eRadio"\t"eLeds"\t"epWaste"\t"Vref;

  # CID_ORINOCO_STATS_REPORT
  } else if (type == 14) {
    seqno         = 256*hex2dec($9) + hex2dec($10);
    tCreateIntvl  = 256*hex2dec($11) + hex2dec($12);
    tReceiveIntvl = 256*hex2dec($13) + hex2dec($14);
    tForwardDelay = 256*(256*(256*hex2dec($15)+hex2dec($16))+hex2dec($17))+hex2dec($18); 
    tTxBurstLen   = hex2dec($19);
    tRxBurstLen   = hex2dec($20);

    data = seqno"\t"tCreateIntvl"\t"tReceiveIntvl"\t"tForwardDelay"\t"tTxBurstLen"\t"tRxBurstLen;

  # CID_ORINOCO_DEBUG_REPORT
  } else if (type == 15) {
    seqno           = 256*hex2dec($9) + hex2dec($10);
    qDropped        = 256*hex2dec($11) + hex2dec($12);
    qDups	    = 256*hex2dec($13) + hex2dec($14);
    pTxBeacons      = 256*(256*(256*hex2dec($15)+hex2dec($16))+hex2dec($17))+hex2dec($18);
    pTxAckBeacons   = 256*(256*(256*hex2dec($19)+hex2dec($20))+hex2dec($21))+hex2dec($22);
    pTxBeaconsFail  = 256*hex2dec($23) + hex2dec($24);
    pRxBeacons      = 256*(256*(256*hex2dec($25)+hex2dec($26))+hex2dec($27))+hex2dec($28);
    pIgnoredBeacons = 256*(256*(256*hex2dec($29)+hex2dec($30))+hex2dec($31))+hex2dec($32);
    pTxPackets      = 256*(256*(256*hex2dec($33)+hex2dec($34))+hex2dec($35))+hex2dec($36);
    pTxPacketsFail  = 256*hex2dec($37) + hex2dec($38);
    pRxPackets      = 256*(256*(256*hex2dec($39)+hex2dec($40))+hex2dec($41))+hex2dec($42);
    pTxTimeouts     = 256*hex2dec($43)+hex2dec($44);
    pMetricResets   = 256*hex2dec($45)+hex2dec($46);

    data = seqno"\t"qDropped"\t"qDups"\t"pTxBeacons"\t"pTxAckBeacons"\t"pTxBeaconsFail"\t"pRxBeacons"\t"pIgnoredBeacons"\t"pTxPackets"\t"pTxPacketsFail"\t"pRxPackets"\t"pTxTimeouts"\t"pMetricResets;

  # CID_SUNSHINE_CONFIG_REPORT
  } else if (type == 16) {
    seqno  = (256*hex2dec($9) + hex2dec($10));
    cap    = hex2dec($11) + hex2dec($12)/256;
    offset = hex2dec($13);

    data = seqno"\t"cap"\t"offset;

  # CID_ORINOCO_CONFIG_REPORT
  } else if (type == 17) {
    seqno        = 256*hex2dec($9) + hex2dec($10);
    minQueueSize = hex2dec($11);
    wakeUpIntvl  = 256*hex2dec($12) + hex2dec($13);
    maxLoad      = hex2dec($14) + hex2dec($15) / 256;
    receiveIntvl = 256*hex2dec($16) + hex2dec($17);
    createIntvl  = 256*hex2dec($18) + hex2dec($19);
    forwardDelay = 256*(256*(256*hex2dec($20)+hex2dec($21))+hex2dec($22))+hex2dec($23);

    data = seqno"\t"minQueueSize"\t"wakeUpIntvl"\t"maxLoad"\t"receiveIntvl"\t"createIntvl"\t"forwardDelay;

  # CID_HARVEST_FORECAST_REPORT
  } else if (type == 18) {
    seqno     = 256*hex2dec($9) + hex2dec($10);
    numSlots  = hex2dec($11);
    firstSlot = hex2dec($12);
    x = 13;
    slots="";
    for (i = 0; i < 12; i++) {
      slots = slots"\t"(hex2dec($(x++)) + hex2dec($(x++)) / 256);
    }
    for (i = 0; i < 12; i++) {
      slots = slots"\t"hex2dec($(x++));
    }

    data = seqno"\t"numSlots"\t"firstSlot"\t"slots;

  } else if (type == 33) {
    seqno     = 256*hex2dec($9) + hex2dec($10);
    data      = seqno;

  } else {
    data = "";
  }


  print node"\t"odata"\t"data;	
}
