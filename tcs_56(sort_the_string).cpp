#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
	string n="aassderf";
	map<char,int>m;
	for(int i=0;i<n.length();i++)
	{
		m[n[i]]+=1;
	}
	string y="";
	for(auto i:m)
	{
		if(i.second==1)
		y+=i.first;
		if(i.second>1)
		{
			for(int j=0;j<i.second;j++)
			{
				y+=i.first;
			}
		}
	}
	cout<<y;
}