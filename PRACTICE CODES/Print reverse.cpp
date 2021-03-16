#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	 long long n,r;
	 vector<int>v;
	 cin>>n;
	 while(n>0)
	 {
		 r=n%10;
		 v.push_back(r);
		 n=n/10;
	 }
	 for(auto x:v)
	 {
		 cout<<x;
	 }
	return 0;
}
