/*
Take as input N, a number. Print the pattern according to given input and output section.

Input Format
Integer

Constraints
1 <= N <= 100;

Output Format
Pattern

Sample Input
3
Sample Output
*

**

***
*/
#include<iostream>
using namespace std;
int main() 
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}cout<<endl;
	}
	return 0;
}
