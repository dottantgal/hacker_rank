#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

void Constrain(int& val, char type)
{
  switch (type) 
  {
    case 'Q':
    {  
      if (val<1)
        val = 1;
      else if (val>pow(10,5))
        val = pow(10,5);
    }
    break;
    case 't':
    {
      if (val<1)
        val = 1;
      else if (val>3)
        val = 3;
    }
    break;
    case 'x':
    {
      if (abs(val)<1)
        val = 1;
      else if (abs(val)>6)
        val = 6;
    }
    break;
    case 'y':
    {
      if (val<1)
        val = 1;
      else if (val>1000)
        val = 1000;
    }
    break;
  }
}


int main()
{
  int Q{0};
  int type{0};
  int x{0}, y{0};
  string studentName;
  int studentMarks;
  map<string, int> myMap;
  cin >> Q;
  Constrain(Q, 'Q');
  map<string, int>::iterator myIterator;
  for (auto i=0; i<Q; i++)
  {
    cin >> type;
    Constrain(type, 't');
    cin >> studentName;
    myIterator = myMap.find(studentName);
    switch (type)
    {
      case 1:
      {
        cin >> studentMarks;
        if(myIterator != myMap.end()) myIterator->second+=studentMarks;
        else myMap.insert(make_pair(studentName, studentMarks));
      }
      break;
      case 2:
      {
        myMap.erase(studentName);
      }
      break;
      case 3:
      {
        if (myIterator!=myMap.end())
          cout << myIterator->second << endl;
        else cout << "0" << endl;
      }
      break;
    }
  }
  return 0;
}