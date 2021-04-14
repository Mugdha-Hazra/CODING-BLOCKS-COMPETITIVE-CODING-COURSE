//Birthday_Paradox_Problem
/*
What is the minimum number of people that should be present in a hall so that there's a x% chance of 2 people having same birthday. 
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
           float x=1.0,num=365,denom=365,p;
           int people=0;
           cout<<"enter percentage:\n";
           cin>>p;
           if(p==1.0)
           {
                          cout<<"366\n";
           }
           else
           {
                          while(x>1-p)
                          {
                                         x=x*num/denom;
                                         num--;
                                         people++;
                          }
                          cout<<"people => "<<people<<" and x => "<<x<<"\n";
           }
           
               return 0;
}
