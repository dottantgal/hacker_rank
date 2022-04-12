#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void ConstrainN(int& val)
{
  if (val<1)
    val = 1;
  else if (val>pow(10,5))
    val = pow(10,5);
}

void ConstrainX(int& val)
{
  if (val<1)
    val = 1;
  else if (val>pow(10,9))
    val = pow(10,9);
}

int main()
{
  int N{0};
  int value{0};
  cin >> N;
  ConstrainN(N);
  vector<int> myVector;
  for (auto i=0; i<N; i++)
  {
    cin >> value;
    myVector.push_back(value);
  }
  int queries{0};
  cin >> queries;
  ConstrainN(queries);
  int numToSearch{0};
  for (auto i=0; i<queries; i++)
  {
    cin >> numToSearch;
    std::vector<int>::iterator low;
    low=std::lower_bound (myVector.begin(), myVector.end(), numToSearch);
    if (low == myVector.end() || *low != numToSearch)
    {
        std::cout << "No " << (low-myVector.begin()+1) << endl;
    } else 
    {
        std::size_t index = std::distance(myVector.begin(), low);
        std::cout << "Yes " << (low-myVector.begin()+1) << endl;
    }  
  }
  return 0;
}