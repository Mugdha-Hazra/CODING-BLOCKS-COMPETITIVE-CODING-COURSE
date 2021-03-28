/*
find the number which is having only one occurance rest all the elements is having 2 elements 
e.g : 1 2 5 2 5 3 3 ---> 1
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
               int a,s=0,n,i;
               cout<<"enter the no. of elements of the array:\n";
               cin>>n;
               for(i=0;i<n;i++)
               {       cin>>a;
                       s=s^a;//xor operation : 4^4=0 , 6^4^6=4
               }
               cout<<"\nans :"<<s;
               return 0;
}
/*enter the no. of elements of the array:
7
1 2 5 2 5 3 3 
ans :1*/
