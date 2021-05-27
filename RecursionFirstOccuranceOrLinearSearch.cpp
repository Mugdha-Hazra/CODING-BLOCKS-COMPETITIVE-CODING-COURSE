#include <iostream>
using namespace std;
int linearRecursiveSearch(int a[],int n,int k)
{
               if(n==0) return -1;
               if(a[0]==k)
               return 0;
               int i=linearRecursiveSearch(a+1,n-1,k);
               if(i==-1)
               return -1;
               else
               return i+1;
}
int main() 
{              int a[]={1,3,5,2,9,7,9,7,4,3,6};
               int n=sizeof(a)/sizeof(int),k=3;
               cout<<linearRecursiveSearch(a,n,k);
               return 0;
}
