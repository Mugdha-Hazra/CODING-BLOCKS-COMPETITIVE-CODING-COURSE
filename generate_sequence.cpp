#include <iostream>
using namespace std;
void generate_subsequence(char*in,char*out,int i,int j)
{
               //base case
               if(in[i]=='\0')
               {
                              out[j]='\0';
                              cout<<out<<"\n";
                              return;
               }
               //rec case
               //include the current char
               out[j]=in[i];
               generate_subsequence(in,out,i+1,j+1);
               //expclude the current char
               generate_subsequence(in,out,i+1,j);
}
int main()
{
               char input[]="abc";
               char output[10];
               generate_subsequence(input,output,0,0);
               return 0;
}
