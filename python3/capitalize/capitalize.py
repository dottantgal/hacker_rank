#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
  if len(s)>0 and len(s)<1000:
    s=s.lower()
    mySplit = re.split("(\s+)",s)
    print(mySplit)
    myString=""
    for myChar in mySplit:
      if not myChar[0].isdigit():
        myString+=myChar.title()
      elif myChar[0].isdigit():
        myString+=myChar
      elif myChar==' ':
        myString+=' '
    return myString
      
  
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()