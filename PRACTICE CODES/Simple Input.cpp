#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,s=0,i=1000000;
	while(i>=0)
	{
		cin>>n;
		s+=n;
		if(s>=0)
		cout<<n<<"\n";
		else
		break;
		i--;
	}
	return 0;
}
