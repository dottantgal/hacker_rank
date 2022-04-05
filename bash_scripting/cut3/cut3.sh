#!/bin/bash
while read line
do 
  echo $line | cut -c 2-7
  # OR echo $line | cut -c 2,3,4,5,6,7
done