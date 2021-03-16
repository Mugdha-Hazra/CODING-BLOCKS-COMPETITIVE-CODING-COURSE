#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector <int>v;

	long long n,r;
	cin>>n;
	if(n==0)
	cout<<5;
	else
	{
	while(n>0)
	{
		r=n%10;
		if(r==0)
		r=5;
		v.push_back(r);
		n=n/10;
	}
	reverse(v.begin(),v.end());
	for(auto x:v)
	cout<<x;}
	return 0;
}
