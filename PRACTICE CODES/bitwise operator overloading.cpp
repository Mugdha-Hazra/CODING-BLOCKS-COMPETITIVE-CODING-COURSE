#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class bitwise
{ int a ;
  public:
  bitwise()
  {
                 
  }
  bitwise(int a)
  {
                 this -> a = a;
  }
                 void show()
                 {
                                cout<<" = "<<a<<"\n";
                 }
                bitwise operator &(bitwise b2)
                {
                               bitwise temp;
                              temp.a=a&b2.a;
                              return temp;
                }
                bitwise operator |(bitwise b2)
                {
                               bitwise temp;
                              temp.a=a|b2.a;
                              return temp;
                }
                bitwise operator ^(bitwise b2)
                {
                               bitwise temp;
                              temp.a=a^b2.a;
                              return temp;
                }
                 bitwise operator >>(bitwise b2)
                {
                               bitwise temp;
                              temp.a=a>>b2.a;
                              return temp;
                }
};
int main() 
{
               int a,b;
               cout<<"Enter 2 numbers:";
               cin>>a>>b;
        bitwise b1(a);
        bitwise b2(b);
        bitwise b3=b1&b2;
        bitwise b4=b1|b2;
        bitwise b5=b1^b2;
        bitwise b6=(b1>>b2);
        cout<<"\nNUMBER 1 ";
        b1.show();
        cout<<"NUMBER 2 ";
        b2.show();
        cout<<"NUMBER1 & NUMBER2 ";
        b3.show();
        cout<<"NUMBER1 | NUMBER2 ";
        b4.show();
        cout<<"NUMBER1 ^ NUMBER2 ";
        b5.show();
        cout<<"NUMBER1 >> NUMBER2 ";
        b6.show();
               return 0;
}
