#!/bin/sh

echo "Usage: $0 Programs local application to motes, starting with ID=10 and incrementing"
echo "       $0 <radio ID of first mote> starts programming motes, auto-increment from ID"
echo "       $0 <mapping file> reads mappings from file (one entry per line: 10=XBRA1234)"

MOTELIST=`which motelist`
COUNT=`$MOTELIST -c | awk 'END{print NR}'`
echo "===================================="
echo "Found $COUNT mote(s) for flashing..."
echo "===================================="

echo "Is this the number of motes you want to flash [Y]?"
read -s -n 1 var_name

if [ "$var_name" == "Y" -o "$var_name" == "y" ] 
then
	echo "===================================="
	echo "Compiling firmware..."
	make tmote --silent
	echo "===================================="

	ID=10					# Default starting value
	if [ $# -eq 1 ]				# A parameter has been passed to this script
	then
		if [[ "$1" =~ ^[0-9]+$ ]]	# It is a number
		then
			if [ $1 -gt 1 ] 	# Don't allocate 1 - it might be the sink
			then
				ID=$1		# Allocate IDs starting from the given one
			fi
		elif [ -f $1 ]
		then
			mapFile="true"		# We have a mapping file
		fi
	fi

	if [ "$mapFile" == "true" ]
	then
		echo "Reading node ID mappings from $1"	
	else 
		echo "Starting ID numbering from number $ID"
	fi
	echo "===================================="

	for I in $($MOTELIST -c | cut -d ',' -f 2) # use 2nd field (bsl port)
	do
		if [ "$mapFile" == "true" ]
		then
			# Search for the node identifier in the mapping file
			# Probably this will not work under anything other than OSX
			DEST=`echo $I | tr -d '\n'`
			ID=`cat $1 | grep $DEST | cut -d '=' -f 1 | tr -d '\n'`
			if [ -z "$ID" ] 
			then
				SHORTDEST=`echo $DEST | tr -d '/dev/tty.usbserial-'`
				ID=`cat $1 | grep $SHORTDEST | cut -d '=' -f 1 | tr -d '\n'`
	
				if [ -z "$ID" ]
				then
					echo "=============W=A=R=N=I=N=G=!================"
					echo "No address mapping defined for node $I"
					echo "============================================"
					continue
				fi
			fi
		fi
		echo "Flashing mote $I with node $ID"
		make tmote reinstall,$ID bsl,$I --silent
		ID=`expr $ID + 1`
	done
else
	echo "Flashing process cancelled!"
fi
