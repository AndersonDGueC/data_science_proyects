#!/bin/bash

read char

if [[ $char == 'Y' || $char == 'y' ]]
then
	echo "YES"
elif [[ $char == 'N' || $char == 'n' ]]; then
	echo "NO"
else
	echo " "
fi