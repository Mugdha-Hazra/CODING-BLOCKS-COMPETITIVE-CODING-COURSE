#include <iostream>
using namespace std;
int print_fibo(int n)
{              if(n==0||n==1)
               return n;
               return print_fibo(n-2)+print_fibo(n-1);
}
int main() 
{              int n;
               cin>>n;
               for(int i=0;i<n;i++)
               cout<<print_fibo(i)<<":";
               return 0;
}
