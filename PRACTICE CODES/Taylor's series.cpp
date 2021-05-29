/*
Taylor's series of e^x is:-
e^x= 1+ x/1! + x/2! + x/3! + x/4!..........(n terms)

where the value of x and n (number of terms to be considered) are taken as input from the user.
*/
#include<bits/stdc++.h>
using namespace std;
double e(int x, int n)
{static double p=1,f=1;
 double r;
 if(n==0)
 return 1;
 r=e(x,n-1);
 p=p*x;
 f=f*n;
 return r+p/f;
}
int main()
{int x,n;
cout<<"Enter the value of X and N:";
cin>>x>>n;
 cout<<e(x,n);
 return 0;
}
