#!/usr/bin/env bash

hello(){
	local s=$1
	echo "hello $s"
}

goodbye(){
	local s=$2
	echo "goodbye $s"
}


##if (( $# == 0 )); then
##	echo 'Name required' fi
