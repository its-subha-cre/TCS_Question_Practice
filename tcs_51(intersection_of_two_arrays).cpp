#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main()
{
	int arr[7]={2,1,3,4,5,2,6};
	int a[3]={2,2,2};
	map<int,int>m;
	vector<int>v;
		for(int i=0;i<3;i++)
	{
		m[a[i]]+=1;
		
	}
	for(int i=0;i<7;i++)
	{
		if(m[arr[i]]>=1)
		{
			v.push_back(arr[i]);
		}
	}
	for(auto i:v)
	{
		cout<<i;
	}
}