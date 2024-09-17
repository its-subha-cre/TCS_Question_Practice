#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string jewels="aA";
	string stones="aAAbbbb";
	    int c=0;
      for(int j=0;j<jewels.length();j++)
      {
       for(int i=j;i<stones.length();i++)
       {
        if(stones[i]==jewels[j])
        {
            c++;
           // cout<<stones[i];
        }
       } 
    }
    cout<<c;
}