#include <iostream>
using namespace std;
int fast_power(int a,int n)
{              if(n==0) return 1;
               int sub_ans=fast_power(a,n/2);
               sub_ans*=sub_ans;
               if(n&1)
               return sub_ans*a;
               else
               return sub_ans;
}
int main()
{              int a=2,n=5;
               cout<<fast_power(a,n);
}
