#!/bin/sh

echo "Usage: $0 <radio ID of first mote>"

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

	ID=10
	if [ $# -eq 1 ]
	then
		if [[ "$1" =~ ^[0-9]+$ ]]
		then
			if [ $1 -gt 1 ] 
			then
				ID=$1
			fi
		fi
	fi
	echo "Starting numbering from number $ID"
	echo "===================================="

	for I in $(/usr/local/bin/motelist | grep /dev/tty.us | cut -d ' ' -f 4)
	do
		echo "Flashing mote $I with node $ID"
		#echo "Do you want to flash mote $I as node $ID? "
		#read -s -n 1 var_name
		#if [ "$var_name" == "Y" -o "$var_name" == "y" ] 
		#then
			echo "Flashing mote $I"
			make tmote reinstall,$ID bsl,$I --silent
			ID=`expr $ID + 1`
		#fi
	done
else
	echo "Flashing process cancelled!"
fi
