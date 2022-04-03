#!/bin/sh
for i in {1..99}
  do
    mod=$((i % 2))
    if (( $mod!=0 ))
    then
      echo $i
    fi
  done