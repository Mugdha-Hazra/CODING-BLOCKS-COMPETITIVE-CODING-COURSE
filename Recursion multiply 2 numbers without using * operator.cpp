#include <iostream>
using namespace std;
int mul(int a,int n)
{              if(n==0||a==0)
               return 0;
               if(n==1)
               return a;
               if(a==1)
               return n;
               if(n==2)
               return a+a;
               if(a==2)
               return n+n;
               if(a>n)
               return a+mul(a,n-1);
               else
               return n+mul(a-1,n);
}
int main() 
{              int a=12,n=9;
               cout<<mul(a,n);
               return 0;
}
