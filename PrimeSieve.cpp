#include<bits/stdc++.h>
using namespace std;
#define ll long long
void prime_sieve(int *p)
{   // we'll skip all even numbers.
    //then mark all odd numbers as (potential)prime.
    //mark them as 1.
    for(int i=3;i<=1000;i+=2)
    {p[i]=1;}
    //now the seive
    //we will jump over all odd numbers.
    //here we'll check that if the current no is
    //not marked then its prime. 
    //then we'mark all its multiple starting from its square.
    //1->prime 0->not prime
    for(ll i=3;i<=100005;i+=2)
    {
        if(p[i]==1)
        {
            for(ll j=i*i;j<=100005;j=j+i)
            {
                p[j]=0;
            }
        }
        
    }
    p[2]=1;
    p[1]=p[0]=0;
}
int main()
{   int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int p[100005]={0};
    prime_sieve(p);
    //printing prime upto n.
    for(int i=0;i<=n;i++)
    {if(p[i]==1)
    {cout<<i<<" ";}
    }return 0;
}
