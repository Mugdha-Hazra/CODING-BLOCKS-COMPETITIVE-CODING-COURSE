#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	//initialising and creating vector.
	
	//initialising a vector named a.
	vector<int> a;
	//initializing a vector of size 5 having eash element 11
	vector<int> b(5,11);
	//coping a vector b to another new vector c .
	vector<int> c(b.begin(),b.end());
	//creating a vector d + initialising it with elements not allowed in c++98
                vector<int> d{1,2,3,4,5,12,34,56,67};
	
	//iterating over the vector
	
	//using for loop(simple)
	for(int i=0;i<c.size();i++)
	{
		cout<<c[i]<<":";
	} cout<<"\n";
	//using iterators.
	for(vector<int>::iterator it = b.begin();it!=b.end();it++)// can use auto in place of "vector<int>::iterator"
	{
	    cout<<(*it)<<":";
	} cout<<endl;
	//for each loop not allowed in c++98
	for(int x:d)  // can use auto in place of int
	{
	    cout<<x<<",";
	}cout<<endl;
	
	//more function on vectors.
	
	//for taking user input and adding it to array.
	vector<int>v;
	int n;
	cout<<"enter no. of elements:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int num;
	    cout<<i<<":";
	    cin>>num;
	    v.push_back(num);
	}
	//v.push_back add a no at the end of vector
	
	for(auto x:v)
	{
	    cout<<x<<":";
	} cout<<"\n";

               for(vector<int>::iterator it = v.begin();it!=v.end();it++)// can use auto in place of "vector<int>::iterator"
	{
	    cout<<(*it)<<":";
	} cout<<endl;
	
	//size of vector
	cout<<v.size()<<"\n";
	
	//capacity of vector
	cout<<v.capacity()<<"\n";
	
	//max expansion of a vector.
	cout<<v.max_size()<<"\n";
	return 0;
}
