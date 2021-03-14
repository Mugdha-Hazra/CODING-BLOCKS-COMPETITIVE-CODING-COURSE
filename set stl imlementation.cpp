#include <iostream>
#include<set> 
using namespace std;
int main() 
{
                //storing elements in an array ;
                int arr[]={10,20,30,40,1,21,22,11,22,22,22,34,55,22};
                int n=sizeof(arr)/sizeof(int);
                //initializing the set
                set<int> s;
                //inserting into set
                for(auto i=0;i<n;i++)
                {
                               s.insert(arr[i]);
                }
                //iterate over the set and print the elements
                for(auto it=s.begin();it!=s.end();it++)
                {
                               cout<<*it<<" $ ";
                }//only unique and sorted output
               return 0;
}
