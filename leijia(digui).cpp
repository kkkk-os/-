#include<iostream>
using namespace std;
int lei_digui(int n)
{
	if(n==1)
	{
		return 1;
	}else
	{
		return n+lei_digui(n-1);
	}
}
