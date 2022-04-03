if __name__ == '__main__':
    n = int(input())
    if n<1:
      n=1
    if n>150:
      n=150
    myString=""
    for i in range(1,n+1):
      myString+=str(i)
    print(myString)