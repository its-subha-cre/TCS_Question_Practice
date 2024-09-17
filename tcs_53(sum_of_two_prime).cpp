#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int n=74;
	vector<int>v;
	for(int i=1;i<=n;i++)
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
for(int i=0;i<v.size()-1;i++)
{
	
}
}