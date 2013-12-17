#!/bin/sh

PORT=`cat ../wowmomtest.map | grep "^$1=" | cut -d '=' -f 2`

java -cp "tinyos.jar:." PrintfClient -comm serial@/dev/tty.usbserial-$PORT:tmote
