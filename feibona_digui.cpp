#include<iostream>
using namespace std;
int fei_digui(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}else
	{
		return fei(n-1)+fei(n-2);
	}
}
