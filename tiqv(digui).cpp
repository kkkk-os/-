//提取一个数字从右往左的第几位是多少
#include<iostream>
using namespace std;
int tiqv_digui(int m,int n)
{
	if(n==1)
	{
		return m%10;
	}else
	{
		return kk(m/10,n-1);
	}
}
