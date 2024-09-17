#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[7]={1,2,5,6,8,9,0};
	int b[7]={3,1,6,5,9,2,8};
	for(int i=0;i<7;i++)
	{
		b[i]=arr[i];
	}
	for(int i=0;i<7;i++)
	{
		cout<<b[i];
	}
}