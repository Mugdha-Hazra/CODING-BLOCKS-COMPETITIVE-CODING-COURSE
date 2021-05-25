#include <iostream>
using namespace std;
int power(int a,int n)
{              if(n==0)
               return 1;
               if(n==1)
               return a;
               if(n==2)
               return a*a;
               
               return a*power(a,n-1);
}
int main() 
{              int a=10,n=5;
               cout<<power(a,n);
               return 0;
}
