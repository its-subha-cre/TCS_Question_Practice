#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int arr[7]={2,2,1,1,3,3,4};
	vector<int>v;
	map<int,int>m;
	for(int i=0;i<7;i++)
	{
	m[arr[i]]+=1;
	if(m[arr[i]]==2)
	{
		continue;
		}	
		v.push_back(arr[i]);
	}
	for(auto i:v)
	{
		cout<<i;
	}
}