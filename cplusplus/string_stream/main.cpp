#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
  vector<int> myVector;
  stringstream ss(str);
  int myNum;
  char myChar;
  while(ss >> myNum >> myChar)
    myVector.push_back(myNum);
  ss >> myNum;
  myVector.push_back(myNum);
  
  return myVector;
}

int main()
{
  string str;
  cin >> str;
  vector<int> integers = parseInts(str);
  for(int i = 0; i < integers.size(); i++) {
    cout << integers[i] << "\n";
  }
  
  return 0;
}