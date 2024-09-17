#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int arr[4]={1,2,3,4};
	vector<int>v;
	int s=0;
	for(int i=0;i<4;i++)
	{
		s+=arr[i];
		v.push_back(s);
	}
	for(auto i:v)
	{
		cout<<i<<" ";
	}
}