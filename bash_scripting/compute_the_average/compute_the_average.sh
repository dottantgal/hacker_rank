#!/bin/bash
average=0
sum=0
read N
while [[ $N -lt "1" ]] || [[ $N -gt "500" ]]
do
  read N
done
for i in $(seq 1 $N)
do
  read X
  while [[ $X -lt "-10000" ]] || [[ $N -gt "10000" ]]
  do
    read X
  done
  sum=$(expr $sum + $X)
done
average=$(expr $sum / $N)
printf "%.3f\n" $(bc <<<"scale=4; $sum / $N")