#include<vector>
#include<iostream>
using namespace std;

int main()
{
	vector<int>v;
	int c=0;
	for(int i=1;i<=100;i++)
	{
		int c=0;
	for(int j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		v.push_back(i);	
	}
	
	}
	int a=9-1;
	
	cout<<v[0];
}