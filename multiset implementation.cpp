#include <iostream>
#include<set>
//typedef multiset<int>::iterator It
using namespace std;
typedef multiset<int>::iterator It;
int main() 
{
               int arr[]={10,12,20,22,23,22,45,56,33,33,33,33,33,33,33};
               int n= sizeof(arr)/sizeof(int);
               
               // inserting into multiset
               multiset<int> m(arr,arr+n);
               
               //iterating over all element
               for(int x:m)
               {
                              cout<<x<<" : ";
               }cout<<endl;
               
               //erasing a particular element
               m.erase(33);
               for(int x:m)
               {
                              cout<<x<<" : ";
               }cout<<endl;
               
               
               //inserting an element
               m.insert(77);
               for(int x:m)
               {
                              cout<<x<<" : ";
               }cout<<endl;
               
               
               //count the occurance of element
               cout<<m.count(33);
               
               //to get a iterate at a particular element
               auto it=m.find(33);
               cout<<(*it)<<"->";
               cout<<endl;
               // to print all accurance of a given number
               pair<It,It>range=m.equal_range(30);
               for(auto it= range.first;it!=range.second;it++)
               {
                              cout<<*it<<"-";
               }
               
               //we have to define iterator before main()
               //typedef multiset<int>::iterator It
               //lower bound and upper bound
               for(auto it = m.lower_bound(10);it!=m.upper_bound(60);it++)
               {
                              cout<<*it<<" - ";
               }
               

               
	return 0;
}
