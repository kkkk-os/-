#include<iostream>
using namespace std;
int diandao(int n)
{
	int m=0;
	for(int i=0;i<32;i++)
	{
		int b;
		b=(n>>i)&1;
		m=m|(b<<(31-i));
	}
	return m;
}
