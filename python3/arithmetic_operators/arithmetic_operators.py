if __name__ == '__main__':
    a = int(input())
    b = int(input())
    if a<1:
      a=1
    elif a>10**10:
      a=10**10
    if b<1:
      b=1
    elif b>10**10:
      b=10**10
    print(a+b)
    print(a-b)
    print(a*b)