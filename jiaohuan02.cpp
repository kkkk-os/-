#include<iostream>
using namespace std;
void jiaohuan02(int& a,int& b)
{
	a=a^b;
	b=a^b;
	a=a^b;
}
