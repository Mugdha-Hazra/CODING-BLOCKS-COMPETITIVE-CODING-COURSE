//internally implemented using hash map
//all the code is same as that of a map 
//the only difference is that we'll not get the element in sorted ordered

#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main() 
{
               //initializing a map 
               unordered_map<string,int>m;
               
               //insetring into map elements
               m.insert(make_pair("Mango",1000));
               
               //inserting M-02
               pair<string,int>p;
               p.first="Apple";
               p.second=1200;
               m.insert(p);
               
               //inserting M-03
               m["Banana"]=2000;
               
               //searching in the map M-01
               string fruit;
               cout<<"enter any fruit:";
               cin>>fruit;
               auto it = m.find(fruit);
               if(it!=m.end())
               cout<<"\nprice is: "<<fruit<<m[fruit]<<"\n";
               else
               cout<<"not found\n";
               
               //searching M-02
               //{it store unique key only once}
               
               if(m.count(fruit))
               cout<<"price is: "<<m[fruit]<<endl;
               else
               cout<<"not found!!\n";
               
               //erase a particular key
               m.erase(fruit);
               
               //update the key value
               m[fruit]+=2903;
               
               //iterate over all key values
               m["Lichi"]=60;
               m["Pineapple"]=100;
               for(auto it=m.begin();it!=m.end();it++)
               {
                              cout<<it->first<<":"<<it->second<<"\n";
               }
               
               //for each loop
               for(auto p:m)
               cout<<p.first<<"<=>"<<p.second<<endl;

	return 0;
}

/*
output:
enter any fruit:not found
not found!!
Mango:1000
Pineapple:100
Lichi:60
Banana:2000
Apple:1200
:2903
Mango<=>1000
Pineapple<=>100
Lichi<=>60
Banana<=>2000
Apple<=>1200
<=>2903

*/
