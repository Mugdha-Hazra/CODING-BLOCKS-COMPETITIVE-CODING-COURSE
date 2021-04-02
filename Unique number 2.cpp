#include<iostream>
using namespace std;
int main() 
{
	int n,a[100000],i,mask,num,res=0,pos=0,t,x=0,y=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		res^=a[i];
	}
	t=res;
	while((t&1)!=1)
	{
		pos++;
		t=t>>1;
	}
	mask=(1<<pos);
	for(i=0;i<n;i++)
	{
		if((a[i]&mask)>0)
		{
			x^=a[i];
		}
	}
	y=res^x;
    cout<<min(x,y)<<" "<<max(x,y)<<"\n";
	return 0;
}
