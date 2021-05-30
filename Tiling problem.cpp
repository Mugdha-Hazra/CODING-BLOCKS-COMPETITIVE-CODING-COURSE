#include <bits/stdc++.h>
using namespace std;
int replaceTile(long long int m,long long int n,long long int s)
{   if(n<m)
    return 1;
    s+=replaceTile(m,n-1,s) + replaceTile(m,n-m,s);
    return s;}
int main() 
{	long long int t;
	cin>>t;
	while(t--)
	{long long int m,n;
    cin>>n>>m;
    cout <<replaceTile(m,n,0)%1000000007<<"\n";
	}return 0;}
