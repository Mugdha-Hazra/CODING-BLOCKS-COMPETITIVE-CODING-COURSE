#include <iostream>
using namespace std;
void all_occurance(int a[],int i,int n,int k)
{
               if(i==n) return;
               if(a[i]==k)
               cout<<i<<":";
               all_occurance(a,i+1,n,k);
}
int main() 
{              int a[]={1,3,5,2,9,7,9,7,4,3,6,3};
               int n=sizeof(a)/sizeof(int),k=3;
               all_occurance(a,0,n,k);
               return 0;
}
