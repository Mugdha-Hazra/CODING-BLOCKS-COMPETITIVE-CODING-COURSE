#include <iostream>
using namespace std;
void replacePI(char a[],int i)
{              if(a[i]=='\0' or a[i+1]=='\0')
               return;
               if(a[i]=='p' and a[i+1]=='i')
               {              int j =i+2;
                              while(a[j]!='\0')j++;
                              while(j>=i+2)
                              {              a[j+2]=a[j];
                                             j--;
                              }
                              a[i]='3';
                              a[i+1]='.';
                              a[i+2]='1';
                              a[i+3]='4';
                              replacePI(a,i+4);
               }else replacePI(a,i+1);
               return;
}
int main() 
{              char a[10000];
               cin>>a;
               replacePI(a,0);
               cout << a <<endl;
               return 0;
}
