//Maximum XOR value of a pair from a range
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () 
{
	int x,y,p,c=0;
	cin>>x>>y;
	p=x^y;
	while(p)
	{
		c++;
		p=p>>1;
	}
	cout<<pow(2,c)-1<<"\n";
	return 0;
}
