#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int zhuanshi(int x,string s)
{
	int sum=0;
	int n=s.size();
	int j=0;
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]<='9')
		{
			sum=sum+(s[i]-'0')*pow(x,j);
			j++;
		}else
		{
			sum=sum+((s[i]-'a')+10)*pow(x,j);
			j++;
		}
	}
	return sum;
}
