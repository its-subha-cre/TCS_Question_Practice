#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[7]={3,1,6,5,9,2,8};
	int k=8;
	int l=0;
	int r=6;
	int mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(arr[mid]==k)
		{
			cout<<"found"<<mid;
			break;
		}
		else if(arr[mid]>k)
		{
			r=mid-1;
		}
		else if(arr[mid]<k)
		{
			l=mid+1;
		}
	}
}