#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,o=0;
		cin>>n;
		while(n>0)
		{
			if(n&1)
			o++;
			n=n>>1;
		}
		cout<<o<<"\n";
	}
	return 0;
}
