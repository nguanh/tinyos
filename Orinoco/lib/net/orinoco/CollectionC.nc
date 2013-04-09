configuration CollectionC {
  provides {
    // control
    interface StdControl;
    interface RootControl;

    // send and receive
    interface Send[uint8_t client];
    interface Receive[collection_id_t id];
    interface Receive as Snoop[collection_id_t id];
    interface Intercept[collection_id_t id];

    // packet
    interface Packet;
    interface CollectionPacket;
  }
  uses {
    interface CollectionId[uint8_t client];
  }
}
implementation {
  components OrinocoP;

  StdControl  = OrinocoP;
  RootControl = OrinocoP;

  Send      = OrinocoP;
  Receive   = OrinocoP.Receive;
  Snoop     = OrinocoP.Snoop;
  Intercept = OrinocoP;

  Packet           = OrinocoP;
  CollectionPacket = OrinocoP;

  CollectionId = OrinocoP;
}
