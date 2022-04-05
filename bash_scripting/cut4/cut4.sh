#!/bin/bash
while read line
do 
  echo $line | cut -c 1-4
  # OR echo $line | cut -c 1,2,3,4
done