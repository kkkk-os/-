#include<iostream>
#include<string>
using namespace std;
string ss="0123456789abcdef";
int x_to_10(int x,string s)
{
	return stoi(s,NULL,x);
}
void _10_to_y(int m,int y)
{
	if(m<y)
	{
		cout<<ss[m];
	}else
	{
		_10_to_y(m/y,y);
		cout<<ss[m%y];
	}
	
}
void x_to_y(int x,string s1,int y)
{
	int m;
	m=x_to_10(x,s1);
	_10_to_y(m,y);
}
