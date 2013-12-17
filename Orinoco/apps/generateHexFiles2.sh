#!/bin/bash

rm ./hex/*
rmdir hex
mkdir hex

PREFIX=`pwd | rev | cut -d / -f 1 | rev`

for I in {1..53}
do
	tos-set-symbols --objcopy msp430-objcopy --objdump msp430-objdump --target ihex build/telosb/main.ihex ./hex/$PREFIX.ihex.out-$I TOS_NODE_ID=$I ActiveMessageAddressC__addr=$I
	rm ./hex/$PREFIX.exe.out-$I
done


