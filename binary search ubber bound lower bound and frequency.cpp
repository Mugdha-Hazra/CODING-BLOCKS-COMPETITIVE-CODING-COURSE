#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int k;
	int a[]={1,2,2,2,2,2,2,2,2,2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(int);
	cin>>k;
	bool present=binary_search(a,a+n,k);
	(present?cout<<"true\n":cout<<"false\n");
	int* ub= upper_bound(a,a+n,k);
	cout<<ub<<"index of the upper bounsd of the key is:"<<ub-a<<"\n";
	int* lb= lower_bound(a,a+n,k);
	cout<<ub<<"index of the lower bounsd of the key is:"<<lb-a<<"\n";
	cout<<"frequency occurance of the key is:"<<(ub-lb);
	return 0;
}
