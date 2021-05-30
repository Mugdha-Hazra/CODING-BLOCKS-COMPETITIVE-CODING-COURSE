//laddar problem
#include <iostream>
using namespace std;
int f(int n,int k)
{              if(n==0) return 1;
               if(n<0) return 0;
               int a=0;
               for(int i=1;i<=k;i++)
               a+=f(n-i,k);
               return a;
}
int main() 
{              int n,k;
               cin>>n>>k;
               cout<<f(n,k);
               return 0;
}
