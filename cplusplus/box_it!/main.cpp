#include<bits/stdc++.h>

using namespace std;

void Constrain(int &val)
{
  if(val<0)
    val = 0;
  if(val>100000)
    val = 100000;
}

class Box
{
private:
  int l, b, h;

public:
  Box()
  {
    l=0;
    b=0;
    h=0;
  }
  Box(int length, int breadth , int height)
  {
    Constrain(length);
    l = length;
    Constrain(breadth);
    b = breadth;
    Constrain(height);
    h = height;
    
  }
  Box(Box *B)
  {
    Constrain(l);
    l = B->l;
    Constrain(b);
    b = B->b;
    Constrain(h);
    h = B->h;
  }
  int getLength()
  {
    return l;
  }
  int getBreadth()
  {
    return b;
  }
  int getHeigth()
  {
    return h;
  }
  long long CalculateVolume()
  {
    long long result;
    result = static_cast<long long int>(l)*b*h;
    return result;
  }
  friend bool operator<(const Box& A, const Box& B);
  friend std::ostream& operator<<(std::ostream& os, const Box& obj);
};

bool operator<(const Box& A, const Box& B)
{
  if (A.l!=B.l || A.h!=B.h || A.b!=B.b)
  {
    if ( (A.l<B.l) || (A.b<B.b && A.l==B.l) || (A.h<B.h && A.b==B.b && A.l==B.l) ) return true;
    else return false;
  }
  return false;
}

std::ostream& operator<<(std::ostream& os, const Box& obj)
{
    return cout << obj.l << " " << obj.b << " " << obj.h;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}