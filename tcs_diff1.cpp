#include<iostream>
#include<vector>
using namespace std;
int fibo(int n)
{
if(n==1)
{
	return 1;
	}	
	else if(n==0)
	{
		return 0;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
	}
}
int primegenerate(int n)
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
	int a=n-1;
	
	return v[a];
}
int main()
{
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
//int k=n;
if(n%2==0)	
{
	int f=n/2;
	cout<<primegenerate(f)<<endl;
}
else
{
	int g=(n+1)/2;
	cout<<fibo(g)<<endl;
}
//1 2 1 3 2 5 3 7 5 11 8 
}