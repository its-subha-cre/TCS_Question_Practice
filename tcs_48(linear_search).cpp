#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int f=0;
	int arr[7]={3,1,6,8,9,2,8};
	int k=8;
	for(int i=0;i<7;i++)
	{
		if(arr[i]==k)
		{
			//cout<<"found";
			f++;
		}
		if(f==1)
		{
			cout<<"found"<<" at "<<i;
			break;
		}
	}
	
}