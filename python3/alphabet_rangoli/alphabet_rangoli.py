from string import ascii_lowercase 

def print_rangoli(size):
    if size>0 and size<27:
      myList = list(ascii_lowercase[0:size])
      for row in range(- size + 1, size):
        row = abs(row)
        dashes = "-" * (2 * row)
        print(dashes + "-".join(myList[:row:-1] + myList[row:]) + dashes)

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)