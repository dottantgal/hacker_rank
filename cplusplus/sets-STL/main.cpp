#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
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
    case 'y':
    {
      if (val<1)
        val = 1;
      else if (val>pow(10,5))
        val = pow(10,5);
    }
    break;
    case 'x':
    {
      if (val<1)
        val = 1;
      else if (val>pow(10,9))
        val = pow(10,9);
    }
    break;
  }
}


int main()
{
  int Q{0};
  int x{0}, y{0};
  set<int> mySet;
  cin >> Q;
  Constrain(Q, 'Q');
  for (auto i=0; i<Q; i++)
  {
    cin >> y >> x;
    Constrain(y, 'y');
    Constrain(x, 'x');
    switch (y)
    {
      case 1:
      {
        mySet.insert(x);
      }
      break;
      case 2:
      {
        mySet.erase(x);
      }
      break;
      case 3:
      {
        set<int>::iterator myIterator;
        myIterator = mySet.find(x);
        if (myIterator!=mySet.end())
          cout << "Yes" << endl;
        else cout << "No" << endl;
      }
      break;
    }
  }
  return 0;
}
