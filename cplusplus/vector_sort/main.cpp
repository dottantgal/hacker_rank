#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Constrain(int &num, string task)
{
  if (task=="enne")
  {
    if (num<1)
      num=1;
    else if (num>100000)
      num=100000;
  }
  else if (task=="intvect")
  {
    if(num<1)
      num=1;
    else if (num>1000000000)
      num=1000000000;
  }
}

int main()
{
  int n={0};
  vector<int> myVector;
  cin >> n;
  Constrain(n, "enne");
  for (int i=0; i<n; i++)
    {
      int intVect{0};
      cin >> intVect;
      Constrain(intVect, "intvect");
      myVector.push_back(intVect);
    }
  sort(myVector.begin(),myVector.end());
  for(int number : myVector)
    cout << number << " ";
  return 0;
}