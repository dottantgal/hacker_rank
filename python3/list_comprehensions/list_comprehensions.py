import itertools

char_to_replace = {'(': '[',
                   ')': ']'}

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    # fast solution
    #print ([[a,b,c] for a in range(0,x+1) for b in range(0,y+1) for c in range(0,z+1) if a + b + c != n ])
    listX = [a for a in range (0,x+1)]
    listY = [a for a in range (0,y+1)]
    listZ = [a for a in range (0,z+1)]
    listAll = [listX, listY, listZ]
    listPerm = list(itertools.product(*listAll))
    listNew = list([p for p in listPerm if p[0]+p[1]+p[2]!=n])
    print('[',end='')
    for i in range(0, len(listNew)):
      stringToPrint = str(listNew[i])
      for key, value in char_to_replace.items():
        stringToPrint = stringToPrint.replace(key, value)
      print(stringToPrint, end='')
      if i<len(listNew)-1:
        print(', ',end='')
    print(']')