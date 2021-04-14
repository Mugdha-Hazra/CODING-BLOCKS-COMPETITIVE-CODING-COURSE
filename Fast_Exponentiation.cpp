//Maths-(iii) Solving Liniar Recurences. (Fast exponention : a faster way to compute a^n).
#include<bits/stdc++.h>
using namespace std;
int powr(int a,int n)
{
  if(n==0)
  {
    return 1;
  }
  int subprob=pow(a,n/2);
  
    if(n&1)
    {
      return a*subprob*subprob;
    }
    return subprob*subprob;
}
int main()
{
  int a,n;
  cin>>a>>n;
  cout<<powr(a,n);
  return 0;
}
