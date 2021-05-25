#include <iostream>
using namespace std;
int binary_search(int a[],int n,int k,int l,int h)
{              if(n==0) return 0;
               if(k>a[n-1]||k<a[0]) return 0;
               if(n==1&&a[0]==k) return 1; 
               int m=(l+h)/2;
               if(a[m]==k)
               return 1;
               else if(a[m]>k)
               return binary_search(a,n,k,l,m-1);
               else 
               return binary_search(a,n,k,m+1,k);
}
int main() 
{              int a[]={1,2,3,4,5,6,7,8,9};
               int n=sizeof(a)/sizeof(int);
               int k=5;
               int l=0;
               int h=n-1;
               cout<<binary_search(a,n,k,l,h);
               return 0;
}
