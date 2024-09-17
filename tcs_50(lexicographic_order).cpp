#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
string s="abcdxyz";
map<int,int>m;
for(int i=0;i<s.length();i++)
{
	m[s[i]]+=1;
}
//char c=99;
string y="";
//cout<<c<<endl;
for(auto i:m)
{

if(i.first==122)
{
	y+='a';
	continue;
}
char c=i.first+1;
y+=c;
//cout<<i.first+1;
}
cout<<y;
}