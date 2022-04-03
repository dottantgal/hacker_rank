#!/bin/sh
read char
while [ "$char" != "n" ] && [ "$char" != "N" ] && [ "$char" != "y" ] && [ "$char" != "Y" ]
  do
    read char
  done
if [ "$char" == "n" ] || [ "$char" == "N" ]
then
  echo "NO"
fi
if [ "$char" == "y" ] || [ "$char" == "Y" ]
then
  echo "YES"
fi