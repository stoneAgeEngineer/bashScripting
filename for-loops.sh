#!/usr/bin/env bash	

for t in {a..f}; do
	echo "hello $t"
done

max=5

## this type of for loop doesnt need $ for variables 
for ((i=0; i < max ; i++)){
	echo "Printing $i"
}
