#!/bin/sh

source=/home/louis/workspace/basis/src/basis.c
if [ "$#" -ne 1 ];then
	echo "Illegal number of paramters"
	return 
fi

target=$1
touch $target
cat $source > $target
echo 'done'

