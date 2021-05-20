#include <iostream>
#include<vector>
//for storing all the primes in the vector
using namespace std;
const int N=100000;//size of prime array
vector<int>primes;//for storing only primes
int p[N]={0};//for storing all elements prime + non prime
void sieve()
{for(int i=2;i<=N;i++)
    {if(p[i]==0)//then mark all the multiples of i as not prime
        {primes.push_back(i);//store all prime numbers
            for(int j=i;j<=N;j+=i)
            p[j]=1;//not prime
        }
    }
}
int main()
{
    sieve();//biuld this sieve once for all
    int t;
    cin>>t;
    while(t--)
    {   int n,m;
        cin>>m>>n;
        bool segment[n-m+1];//quiry array
        for(int i=0;i<n-m+1;i++)
        segment[i]=0;
        for(auto x:primes)//segmented sieve logic
        {   if(x*x>n)break;//if sq of prime no is greater than n theb break
            int start=(m/x)*x;
            if(x>=m and x<=n)
            start = x*2;
            //mark all multiple of x,in the range start to n as not primes
            for(int i=start;i<=n;i+=x)
            segment[i-m]=1;
        }
        for(int i=m;i<=n;i++)
        {   if(segment[i-m]==0 and i!=1)
            cout<<i<<"\n";
        }
    }
}
