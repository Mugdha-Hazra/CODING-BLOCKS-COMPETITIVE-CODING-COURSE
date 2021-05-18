//Bitset Sieve
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int n=10000000;
vector<int>primes;
bitset<10000005>b;//making an array of bits of size 10000005.
void sieve()
{  b.set();//sets all the bits as 1
    b[0]=b[1]=0;
    for(ll i=2;i<=n;i++)
    { if(b[i])// if the bit is set bit then push it into vector primes
        {   primes.push_back(i);
            for(ll j=i*i;j<=n;j=j+i)//mark all its multiple as 0 except the number itself
            {b[j]=0;}
        }
    }
}
int main()
{sieve();//calling the sieve function
for(int i=0;i<=100;i++)
{cout<<primes[i]<<" ";}//printing the prime array
   return 0;
}
