#!/usr/bin/perl
use strict;
use warnings;

use Math::Round qw/round/;

### setup
use constant COL_PKT_LEN => 7;
use constant COL_PAYLOAD => 8;

### process packet
sub process {
  my @data = \@_;

  # hex -> dec
  foreach my $d (@data) { $d = hex($d); }
  print @data;
print "qual";
}


sub getQuery {
  my $p = shift;
  my %d = %$p;
  print "====================================\n";
  while ( my ($k,$v) = each %d ) {
    print "$k => $v\n";
  }
}

sub oct2dec {
  my $res = shift @_;
  while (my $d = shift @_) {
    $res = 256*$res + $d;
  }
  return $res;
}


### data
sub orinoco {
  # AM header info are 8 byte
  # length is stored in sixth byte
  # orinoco currently uses 12 extra bytes at packet's end
  # delay tracking has another 8 byte
  my $s = 8 + $_[5] - 12 - 8;

  my %oh;
  $oh{'sink'}   = 256*$_[1] + $_[2];
  $oh{'origin'} = 256*$_[$s++] + $_[$s++];
  $oh{'seqno'}  = $_[$s++];
  $oh{'hops'}   = $_[$s++];
  $oh{'type'}   = $_[$s++];
  
  # packet path
  $oh{'path'}   = "'$oh{'origin'}";
  for (my $i = 0; $i < 7; $i++) {
    my $p = $_[$s++];
    if ($p != 0) { $oh{'path'} .= ",".$p; }
  }
  $oh{'path'} .= ",$oh{'sink'}'";

  # timing
  $oh{'inserttime'} = "NOW()";
  $oh{'createtime'} = round((256*(256*(256*$_[$s++]+$_[$s++])+$_[$s++])+$_[$s++]) / 1024 * 1000);
  $oh{'delay'}      = round(256*(256*(256*$_[$s++]+$_[$s++])+$_[$s++])+$_[$s++] / 1024 * 1000);

  return %oh;
}

sub payload {
  my $ptype = $_[COL_PKT_LEN];  # packet type

  if ($ptype == 13) {
    return energyReport(@_);    
  } elsif ($ptype == 14) {
    return energyReport(@_);    
  } elsif ($ptype == 15) {
    return energyReport(@_);    
  } elsif ($ptype == 16) {
    return energyReport(@_);    
  } elsif ($ptype == 17) {
    return energyReport(@_);    
  } elsif ($ptype == 18) {
    return energyReport(@_);    
  }
}


# energy report
sub energyReport {
  my @d = @_;
  my $i = COL_PAYLOAD;
  my %data;

  $data{'seqno'}   = oct2dec($d[$i++], $d[$i++]);           # data seqno
  $data{'Vcap'}    = oct2dec($d[$i++], $d[$i++])/256.0;     # cap voltage (V)
  $data{'Isolar'}  = oct2dec($d[$i++], $d[$i++])/256.0;     # solar current (mA)
  $data{'light'}   = oct2dec($d[$i++], $d[$i++]);           # brightness (raw)
  $data{'temp'}    = oct2dec($d[$i++], $d[$i++])/256.0;     # temperature (degree celsius)
  if ($data{'temp'} >= 128) { $data{'temp'} -= 256; }
  $data{'eMCU'}    = oct2dec($d[$i++], $d[$i++], $d[$i++], $d[$i++]);    # energy MCU
  $data{'eRadio'}  = oct2dec($d[$i++], $d[$i++], $d[$i++], $d[$i++]);    # energy Radio
  $data{'eLeds'}   = oct2dec($d[$i++], $d[$i++], $d[$i++], $d[$i++]);    # energy Leds
  $data{'epWaste'} = oct2dec($d[$i++], $d[$i++], $d[$i++], $d[$i++]);    # time wasted for energy counting
  $data{'Vref'}    = oct2dec($d[$i++], $d[$i++])/256.0;       # cap voltage (V)

  return %data;
}

sub orinocoStatsReport {
  my @d = @_;
  my $i = COL_PAYLOAD;
  my %data;

  $data{'seqno'}        = oct2dec($d[$i++], $d[$i++]);
  $data{'createIntvl'}  = oct2dec($d[$i++], $d[$i++])/1024*1000;
  $data{'rxIntvl'}      = oct2dec($d[$i++], $d[$i++])/1024*1000;
  $data{'fwdDelay'}     = oct2dec($d[$i++], $d[$i++], $d[$i++], $d[$i++])/1024*1000;
  $data{'txBurstLen'}   = $d[$i++];
  $data{'rxBurstLen'}   = $d[$i++];

  return %data;
}

sub orinocoDebugReport {
}

sub sunshineConfigReport {
}

sub orinocoConfigReport {
}

sub harvestForecastReport {
}



### read
LINE: while (<>) {
  my $line = $_;
  chomp($line);

  # if the line does not start with a digit, discard
  next unless $line =~ /^0/;

  # get octets plus hex2dec
  my @data = split(/ /, $line);
  foreach my $d (@data) { $d = hex($d); }

  # process
  my %oh = orinoco(@data);
  my %pl = payload(@data);

  # insert mit perl DBI
# TODO
# -> get new packet id from database
# -> attach to both n-tuples
# -> insert into db 
  getQuery(\%oh);
  getQuery(\%pl);

  print STDERR "$line\n";
print "----------------------------------------------------------------------\n";
}


# main part
# must comply with Reporting.h
# and corresponding message type definitions
#/[[:xdigit:]]/ {
#/^00/ {
  #node     = hex2dec($5);   # node id
  #type     = hex2dec($8);   # packet type
  #odata    = orinoco();     # read orinoco header
#
  ## CID_ENERGY_REPORT
  #if (type == 13) {
    #seqno    = 256*hex2dec($9)+hex2dec($10);          # packet seqno (one every 30 sec)
    #Vcap     = hex2dec($11)+hex2dec($12)/256.0;       # cap voltage (V)
    #Isolar   = hex2dec($13)+hex2dec($14)/256.0;       # solar current (mA)
    #light    = 256*hex2dec($15)+hex2dec($16);         # brightness (raw)
    #temp     = hex2dec($17)+hex2dec($18)/256.0;       # temperature (degree celsius)
    #if (temp >= 128) temp -= 256;
    #eMCU     = 256*(256*(256*hex2dec($19)+hex2dec($20))+hex2dec($21))+hex2dec($22);    # energy MCU
    #eRadio   = 256*(256*(256*hex2dec($23)+hex2dec($24))+hex2dec($25))+hex2dec($26);    # energy Radio
    #eLeds    = 256*(256*(256*hex2dec($27)+hex2dec($28))+hex2dec($29))+hex2dec($30);    # energy Leds
    #epWaste  = 256*(256*(256*hex2dec($31)+hex2dec($32))+hex2dec($33))+hex2dec($34);    # time wasted for energy counting
    #Vref     = hex2dec($35)+hex2dec($36)/256.0;       # cap voltage (V)
#
    #data = seqno"\t"Vcap"\t"Isolar"\t"temp"\t"light"\t"eMCU"\t"eRadio"\t"eLeds"\t"epWaste"\t"Vref;
#
  ## CID_ORINOCO_STATS_REPORT
  #} else if (type == 14) {
    #seqno         = 256*hex2dec($9) + hex2dec($10);
    #tCreateIntvl  = 256*hex2dec($11) + hex2dec($12);
    #tReceiveIntvl = 256*hex2dec($13) + hex2dec($14);
    #tForwardDelay = 256*(256*(256*hex2dec($15)+hex2dec($16))+hex2dec($17))+hex2dec($18); 
    #tTxBurstLen   = hex2dec($19);
    #tRxBurstLen   = hex2dec($20);
#
    #data = seqno"\t"tCreateIntvl"\t"tReceiveIntvl"\t"tForwardDelay"\t"tTxBurstLen"\t"tRxBurstLen;
#
  ## CID_ORINOCO_DEBUG_REPORT
  #} else if (type == 15) {
    #seqno           = 256*hex2dec($9) + hex2dec($10);
    #qDropped        = 256*hex2dec($11) + hex2dec($12);
    #qDups	    = 256*hex2dec($13) + hex2dec($14);
    #pTxBeacons      = 256*(256*(256*hex2dec($15)+hex2dec($16))+hex2dec($17))+hex2dec($18);
    #pTxAckBeacons   = 256*(256*(256*hex2dec($19)+hex2dec($20))+hex2dec($21))+hex2dec($22);
    #pTxBeaconsFail  = 256*hex2dec($23) + hex2dec($24);
    #pRxBeacons      = 256*(256*(256*hex2dec($25)+hex2dec($26))+hex2dec($27))+hex2dec($28);
    #pIgnoredBeacons = 256*(256*(256*hex2dec($29)+hex2dec($30))+hex2dec($31))+hex2dec($32);
    #pTxPackets      = 256*(256*(256*hex2dec($33)+hex2dec($34))+hex2dec($35))+hex2dec($36);
    #pTxPacketsFail  = 256*hex2dec($37) + hex2dec($38);
    #pRxPackets      = 256*(256*(256*hex2dec($39)+hex2dec($40))+hex2dec($41))+hex2dec($42);
    #pTxTimeouts     = 256*hex2dec($43)+hex2dec($44);
    #pMetricResets   = 256*hex2dec($45)+hex2dec($46);
#
    #data = seqno"\t"qDropped"\t"qDups"\t"pTxBeacons"\t"pTxAckBeacons"\t"pTxBeaconsFail"\t"pRxBeacons"\t"pIgnoredBeacons"\t"pTxPackets"\t"pTxPacketsFail"\t"pRxPackets"\t"pTxTimeouts"\t"pMetricResets;
#
  ## CID_SUNSHINE_CONFIG_REPORT
  #} else if (type == 16) {
    #seqno  = (256*hex2dec($9) + hex2dec($10));
    #cap    = hex2dec($11) + hex2dec($12)/256;
    #offset = hex2dec($13);
#
    #data = seqno"\t"cap"\t"offset;
#
  ## CID_ORINOCO_CONFIG_REPORT
  #} else if (type == 17) {
    #seqno        = 256*hex2dec($9) + hex2dec($10);
    #minQueueSize = hex2dec($11);
    #wakeUpIntvl  = 256*hex2dec($12) + hex2dec($13);
    #maxLoad      = hex2dec($14) + hex2dec($15) / 256;
    #receiveIntvl = 256*hex2dec($16) + hex2dec($17);
    #createIntvl  = 256*hex2dec($18) + hex2dec($19);
    #forwardDelay = 256*(256*(256*hex2dec($20)+hex2dec($21))+hex2dec($22))+hex2dec($23);
#
    #data = seqno"\t"minQueueSize"\t"wakeUpIntvl"\t"maxLoad"\t"receiveIntvl"\t"createIntvl"\t"forwardDelay;
#
  ## CID_HARVEST_FORECAST_REPORT
  #} else if (type == 18) {
    #seqno     = 256*hex2dec($9) + hex2dec($10);
    #numSlots  = hex2dec($11);
    #firstSlot = hex2dec($12);
    #x = 13;
    #slots="";
    #for (i = 0; i < 12; i++) {
      #slots = slots"\t"(hex2dec($(x++)) + hex2dec($(x++)) / 256);
    #}
    #for (i = 0; i < 12; i++) {
      #slots = slots"\t"hex2dec($(x++));
    #}
#
    #data = seqno"\t"numSlots"\t"firstSlot"\t"slots;
#
  #} else if (type == 255) {
    #data = "";
  #}
#
#
  #print node"\t"odata"\t"data;	
#}

