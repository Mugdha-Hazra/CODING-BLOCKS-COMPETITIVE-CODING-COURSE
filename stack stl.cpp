#include <iostream>
#include<stack> 
using namespace std;
int main() 
{
               //initilize
               stack<int>s;
               //initilize in stack
               for(int i=0;i<7;i++)
               {s.push(i);}
               //removing and displaying
               while(!s.empty())
               {
                              cout << s.top()<<":";
                              s.pop();
               } cout<<endl;
               return 0;
}
