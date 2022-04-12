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

int main() {
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
  int X{0};
  cin >> X;
  if ( (X>=1) && (X<=N) )
    myVector.erase(myVector.begin()+(X-1));
  int a{0};
  int b{0};
  cin >> a >> b;
  if ( (a>=1) && (b<=N) && (a<b))
    myVector.erase(myVector.begin()+(a-1), myVector.begin()+(b-1));
  cout << myVector.size() << endl;
  for (auto val : myVector)
    cout << val << " ";
  return 0;
}
