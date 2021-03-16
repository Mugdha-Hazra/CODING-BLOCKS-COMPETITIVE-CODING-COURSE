#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,s=0,r,c,i=0;
	cin>>n;
	while(n>0)
	{
		r=n%10;
		s+=r*pow(2,i);
		i++;
		n=n/10;
	}cout<<s<<"\n";
	}
	return 0;
}
