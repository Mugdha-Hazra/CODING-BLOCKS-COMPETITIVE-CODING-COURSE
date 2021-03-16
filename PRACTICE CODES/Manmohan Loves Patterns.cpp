#include<iostream>
using namespace std;
int main() 
{
	int n,i,j;
	cin>>n;
	cout<<"1\n";
	for(i=1;i<n;i++)
	{   cout<<i;
		for(j=0;j<i-1;j++)
		{
			cout<<"0";
		}//cout<<"\n";
		cout<<i;
		cout<<"\n";
	}
	return 0;
}
