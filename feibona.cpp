#include<iostream>
using namespace std;
int feibo(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	int a=1,b=1,c;
	for(int i=0;i<n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
