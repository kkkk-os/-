//字符串法（效率低）
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool hui(int n)
{
string s1=to_string(n);
  string s2=s1;
  reverse(s2.begin(),s2.end());
  return s1==s2;
}
