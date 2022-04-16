if __name__ == '__main__':
    N = int(input())
    myList = []
    for x in range (N):
      command = input()
      splitCommand = command.split(" ")
      if splitCommand[0] == "insert":
        myList.insert(int(splitCommand[1]), int(splitCommand[2]))
      elif splitCommand[0] == "print":
        print(myList)
      elif splitCommand[0] == "remove":
        if int(splitCommand[1]) in myList:
          myList.remove(int(splitCommand[1]))
      elif splitCommand[0] == "append":
        myList.append(int(splitCommand[1]))
      elif splitCommand[0] == "sort":
        myList.sort()
      elif splitCommand[0] == "pop":
        myList.pop()
      elif splitCommand[0] == "reverse":
        myList.reverse()