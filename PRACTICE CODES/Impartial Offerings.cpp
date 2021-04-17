#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p=0;
    cin>>t;
    while(t--)
    {   p++;
        int n,i,a[1000005],c=0,s=0,x=0;
        cin>>n;
        for(i=0;i<n;i++)
        {cin>>a[i];}
        sort(a,a+n);
        c=1;x=a[0];
        for(i=0;i<n;i++)
        {   if(a[i]>x)
            {   c++;
                s+=c;
                x=a[i];
            }
            else
            {
                s+=c;
            }
        }
        cout<<"Case #"<<p<<": "<<s<<"\n";
    }
    return 0;
}
