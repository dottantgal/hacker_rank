if __name__ == '__main__':
    n = int(input())
    myList = list(map(int, input().split()))
    myList.sort()
    maxValue = max(myList)
    while maxValue in myList:
      myList.remove(maxValue)
    print(max(myList))