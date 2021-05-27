#include<bits/stdc++.h>
using namespace std;
void printdigit(int r)
{
               if(r==0)return;
               printdigit(r/10);
               int n=r%10;
               {if(n==0)cout<<"Zero";
               if(n==1)cout<<"One";
               if(n==2)cout<<"Two";
               if(n==3)cout<<"Three";
               if(n==4)cout<<"Four";
               if(n==5)cout<<"Five";
               if(n==6)cout<<"Six";
               if(n==7)cout<<"Seven";
               if(n==8)cout<<"Eight";
               if(n==9)cout<<"Nine";     
               }
               
}
               int main()
               {
                              int n;
                              cin>>n;
                              printdigit(n);
                              return 0;
               }
