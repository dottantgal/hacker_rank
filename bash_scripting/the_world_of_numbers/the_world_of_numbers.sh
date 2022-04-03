#!/bin/sh
read X
if [[ $X -lt "-100" ]]
then
  X=-100
elif [[ $X -gt "100" ]]
then
  X=100
fi
read Y
while [[ $Y -eq "0" ]]
  do
    read Y
  done
if [[ $Y -lt "-100" ]]
then
  Y=-100
elif [[ $Y -gt "100" ]]
then
  Y=100
fi
echo $(expr $X + $Y)
echo $(expr $X - $Y)
echo $(( $X * $Y ))
echo $(( $X / $Y ))