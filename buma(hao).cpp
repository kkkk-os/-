#include<iostream>
using namespace std;
int bu(int num)
{
	int sum=0,i=0;
	while(num)
	{
	if((num&1)==0)
	{
		sum=sum|(1<<i);
	}
	num>>=1;
	i++;
	}
	return sum;
}
