#include<iostream>
using namespace std;
int bu(int num)
{
	int n;
	for(int i=31;i>=0;i--)
	{
		if(((num>>i)&1)==1)
		{
			n=i;
			break;
		}
	}
	for(int i=0;i<=n;i++)
	{
		if(((num>>i)&1)==0)
		{
			num=num|(1<<i);
		}else
		{
			num=num^(1<<i);
		}
	}
	return num;
}
