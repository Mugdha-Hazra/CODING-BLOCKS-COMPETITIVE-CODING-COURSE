/*
Given N positive numbers, your task is to calculate their HCF.

Input Format
First line of input contains a single integer N, second line contains N space separated positive integers whose HCF is to be computed.

Constraints
N <= 10 and all the numbers lie between 1 and 100.

Output Format
Print HCF of N numbers.

Sample Input
3
2 4 6
Sample Output
2
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int a[100],i,n,s=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	s=a[0];
	for(i=1;i<n;i++)
	{
		s=__gcd(s,a[i]);
	}
	cout<<s<<"\n";
	return 0;
}
