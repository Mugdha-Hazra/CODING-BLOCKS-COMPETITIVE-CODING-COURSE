#include <iostream>
using namespace std;
int last_occurance(int a[],int n,int k)
{
               if(n==0) return -1;
               int i=last_occurance(a+1,n-1,k);
               if(i==-1)
               {              if(a[0]==k)
                              return 0;
                              else
                              return -1;
               }
               
               return i+1;
}
int main() 
{              int a[]={1,3,5,2,9,7,9,7,4,3,6};
               int n=sizeof(a)/sizeof(int),k=3;
               cout<<last_occurance(a,n,k);
               return 0;
}
