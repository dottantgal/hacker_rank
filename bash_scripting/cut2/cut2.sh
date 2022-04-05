#!/bin/bash
while read line
do 
  A=`echo $line | cut -c 2`
  B=`echo $line | cut -c 7`
  echo -n "$A";echo $B
done