#include<string>
#include<iostream>
using namespace std;
string s="0123456789abcdef";
void jinzhi_digui(int m,int x)
{
	if(m<x)
	{
		cout<<s[m];
	}else
	{
		jinzhi_digui(m/x,x);
		cout<<s[m%x];
	}
}
