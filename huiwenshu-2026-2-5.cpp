#include<iostream>
using namespace std;
bool hui(int n)
{
	int sum=0,w=n;
	while(w)
	{
		sum=sum*10+w%10;
		w/=10;
	}
	return sum==n;
}
