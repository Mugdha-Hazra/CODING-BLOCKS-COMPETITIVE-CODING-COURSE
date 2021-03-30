/*
Bitwise operators and Common bit operations
& -> and
| -> or
~ -> not
^ -> xor (if same then 0 else 1)
<< -> left shift
>> -> right shift
*/
#include <iostream>
using namespace std;
int decimalToBinary(int n)
{
               int p=1,s=0,a=0;
               while(n)
               {
                              s=n&1;
                              a+=s*p;
                              p*=10;
                              n=n>>1;
               }
               return a;
}
bool isodd(int n)
{
               return(n&1);
}
int ithRightBit(int n,int i)
{
               return(n&(1<<i)?1:0);
}
int setBit(int n,int i)
{
               return(n|(1<<i));
}
int clearIthBit(int n,int i)
{
               return(n&(~(1<<i)));
}
int updateBit(int n,int i,int v)
{
               return(clearIthBit(n,i)|(v<<i));
}
int clearLastUBits(int n,int u)
{
               return(n&(-1<<u));
}
int main() 
{
               int n,i,v,l,u;
               cout<<"enter any number: ";
               cin>>n;
               cout<<n;
               cout<<"\nenter the pos :";
               cin>>i;
               cout<<i;
               cout<<"\nenter the value to be updated :";
               cin>>v;
               cout<<v;
               cout<<"\nenter the range : (l=lower bound u=upperbound)";
               cin>>l>>u;
               cout<<"\nl:"<<l<<"\nu:"<<u;
               cout<<"\n";
               //left shift and right shift
               cout<<"\nleft shift by 1 : "<<(n<<1)<<"\n\nright shift by 1 : "<<(n>>1)<<"\n";
               
               //convert a number from decimal to binary.
               cout<<"\ndecimal to binary"<<n<<"->"<<decimalToBinary(n)<<"\n";

               //find wether a no is even or odd.
               cout<<"\nodd(1)/even(0) : "<<isodd(n)<<"\n";
               
               //getting the ith bit of a number from the right
               cout<<"\ngetting ith bit from the right : "<<ithRightBit(n,i)<<" implementation :"<<decimalToBinary(n)<<"->"<<decimalToBinary(ithRightBit(n,i))<<"\n";
               
               //setting a perticular set bit(1) at a given position
               cout<<"\nsetting the set bit at a given pos :"<<setBit(n,i)<<" implementation :"<<decimalToBinary(n)<<"->"<<decimalToBinary(setBit(n,i))<<endl;
               
               //clear ith bit from a number
               cout<<"\nclear ith bit from a number :"<<clearIthBit(n,i)<<" implementation :"<<decimalToBinary(n)<<"->"<<decimalToBinary(clearIthBit(n,i))<<"\n";
               
               //update a particular bit (setting a value v(0/1) to a particular position i)
               cout<<"\nupdate a particular bit :"<<updateBit(n,i,v)<<" implementation :"<<decimalToBinary(n)<<"->"<<decimalToBinary(updateBit(n,i,v))<<"\n";
               
               //clear last u Bit
               cout<<"\nclear last u bits :"<<clearLastUBits(n,u)<<" implementation :"<<decimalToBinary(n)<<"->"<<decimalToBinary(clearLastUBits(n,u))<<"\n";
           
	return 0;
}



/*
OUTPUT
=============================================================================================================================
enter any number: 19
enter the pos :2
enter the value to be updated :1
enter the range : (l=lower bound u=upperbound)
l:2
u:4
==============================================================================================================================
left shift by 1 : 38

right shift by 1 : 9

decimal to binary19->10011

odd(1)/even(0) : 1

getting ith bit from the right : 0 implementation :10011->0

setting the set bit at a given pos :23 implementation :10011->10111

clear ith bit from a number :19 implementation :10011->10011

update a particular bit :23 implementation :10011->10111

clear last u bits :16 implementation :10011->10000
===============================================================================================================================
*/
