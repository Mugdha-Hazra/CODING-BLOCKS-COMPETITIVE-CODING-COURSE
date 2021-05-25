#include <iostream>
using namespace std;
void print_dsce(int n)
{              if(n==0)
               return;
               cout<<n<<":";
               return print_dsce(n-1);
}
void print_asce(int n)
{              if(n==0)
               return;
               print_asce(n-1);
               cout<<n<<":";
}
int main() 
{              int n;
               cin>>n;
               cout<<"1\n";
               print_asce(n);
               cout<<"\n2\n";
               print_dsce(n);
               return 0;
}
