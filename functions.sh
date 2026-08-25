#!/usr/bin/env bash

greet(){
	local name=$1
	echo "Hello there $name"
}

for n in "$@"; do 
	greet "$n"
done;
