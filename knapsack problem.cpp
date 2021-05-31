// knapsack problem
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int val[],int wt[],int w,int n)
{
	if(w==0||n==0)
	return 0;
	else
	{   if(wt[n-1]<=w)
	    {
	    	return max(val[n-1] + knapsack(val,wt,w-wt[n-1],n-1),knapsack(val,wt,w,n-1));
		}
		else if(wt[n-1] > w)
		{
			return knapsack(val,wt,w,n-1);
		}
	}
}
int main()
{ int n,val[10000],wt[10000],w,i;
	cout<<"\nenter the size of kanpsack\n";
	cin>>w;
	cout<<"\nenter the no of things:\n";
	cin>>n;
	cout<<"\nenter the profit and wt of each element\n";
	for(i=0;i<n;i++)
	{
		cin>>val[i]>>wt[i];
	} cout<<"\ncapacity is:"<<w<<"\nprofit array:\n";
	for(i=0;i<n;i++)
	{
		cout<<val[i]<<"\t";
	} cout<<"\nweight array :\n";
		for(i=0;i<n;i++)
	{
		cout<<wt[i]<<"\t";
	}
	 
	cout<<"\nmax profit!! :"<<knapsack(val,wt,w,n);
	
	return 0;
}
