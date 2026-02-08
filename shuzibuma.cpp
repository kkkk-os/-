#include<iostream>
#include<string>
using namespace std;
int sum=0;
void _10_to_2(int num)
{
	if(num<2)
	{
		sum=sum+num;
	}else
	{
		_10_to_2(num/2);
		sum=sum*10+num%2;
	}
}
int main()
{
	int num;
	cin>>num;
	_10_to_2(num);
	string s=to_string(sum);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1')
		{
			s[i]='0';
		}else
		{
			s[i]='1';
		}
	}
	num=stoi(s,NULL,2);
	cout<<num;
	return 0;
}
