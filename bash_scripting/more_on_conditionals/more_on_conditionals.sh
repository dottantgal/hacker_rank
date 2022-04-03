#!/bin/sh
read X
if [[ $X -lt 1 ]]
then
  X = 1
elif [[ $X -gt 1000 ]]
then
  X = 1000
fi
read Y
if [[ $Y -lt 1 ]]
then
  Y = 1
elif [[ $Y -gt 1000 ]]
then
  Y = 1000
fi
read Z
if [[ $Z -lt 1 ]]
then
  Z = 1
elif [[ $Z -gt 1000 ]]
then
  Z = 1000
fi
if [[ $X -eq $Y ]] && [[ $Y -eq $Z ]]
then
  echo "EQUILATERAL"
elif [[ $X -eq $Y && $Y -ne $Z ]] || [[ $Z -eq $Y && $Y -ne $X ]] || [[ $X -eq $Z && $Z -ne $Y ]]
then
  echo "ISOSCELES"
else
  echo "SCALENE"
fi