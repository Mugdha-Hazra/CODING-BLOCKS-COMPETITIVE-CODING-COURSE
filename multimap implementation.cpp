#include <iostream>
#include<map>
#include<string>
using namespace std;

int main() 
{
               //initilize
               multimap <char,string>m;
               
               //inserting into map
               int n;
               cout<<"enter no:";
               cin>>n;
               for(int i=0;i<n;i++)
               {
                              char ch;
                              string s;
                              cin>>ch>>s;
                              m.insert(make_pair(ch,s));
               }
               
               //printing the entire map
               for(auto p:m)
               cout<<p.first<<" -> "<<p.second<<endl;
               
               //erase the particular key
               auto it=m.begin();
               m.erase(it);
               
               //lower bound and upper bound
               auto it2=m.lower_bound('b');
               auto it3=m.upper_bound('d');
               
               for(auto it4=it2;it4!=it3;it4++)
               {
                              cout<<it4->second<<" : "<<it4->first<<endl;
               }
               
               //search for an element
               auto f=m.find('c');
               if(f->second=="cat")
               m.erase(f);
               
               for(auto p:m)
               cout<<p.first<<" -> "<<p.second<<endl;
               
               
               return 0;
}
