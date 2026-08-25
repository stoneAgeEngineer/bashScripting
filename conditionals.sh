#!/usr/bin/env bash

a=1
b=1
 
if [[ $a == $b ]] then
	echo "a and b are same"
fi

c=2
d=3

if [[ $c != $d ]] then
	echo "c and d are NOT same"
fi

while [[ -f text.txt ]]; do
	echo "File exists delete it "
	sleep 2 
done

