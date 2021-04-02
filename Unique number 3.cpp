#include<iostream>
using namespace std;
int main() 
{
	int cnt[64]={0},i;
	int n,num;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		int j=0;
		while(num>0)
		{
			int lb=(num&1);
			cnt[j]+=lb;
			j++;
			num=num>>1;
		}
	}
	int p=1,ans=0;
	for(i=0;i<64;i++)
	{
		cnt[i]%=3;
		ans+=(cnt[i]*p);
		p=p<<1;
	}
	cout<<ans<<"\n";
	return 0;
}
