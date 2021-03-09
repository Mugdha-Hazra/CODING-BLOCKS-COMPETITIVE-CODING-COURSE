#include <iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Hello World!\n";
    //creatin and initializing a vector
    vector<int> d{1,2,3,45,6,9};
    //inserting a element at the end
    d.push_back(33);
    // printing all the element
    for(auto x:d)
    {cout<<x<<"\t";}
    cout<<endl;
    //deleting the last element
    d.pop_back();
    for(auto x:d)
    cout<<x<<"\t";
    cout<<endl;
    //inserting some element in the middle
    d.insert(d.begin()+3,100);
    for(auto x:d)
    cout<<x<<"\t";
    cout<<endl;
    //for inserting more than 1 element
    d.insert(d.begin()+2,3,0);
    for(auto x:d)
    cout<<x<<"\t";
    cout<<endl;
    //erase some of the elemet from middle
    d.erase(d.begin()+4);
    for(auto x:d)
    cout<<x<<"\t";cout<<endl;
    //for erasing more than 1 elements
    d.erase(d.begin()+5,d.end());
    for(auto x:d)
    cout<<x<<"\t";cout<<endl;
    //size of vector
    cout<<d.size()<<endl;
    //capacity
    cout<<d.capacity()<<endl;
    //resize
    d.resize(9);
    cout<<d.size()<<" "<<d.capacity()<<endl;
    for(auto x:d)
    cout<<x<<"\t";cout<<endl;
    //to avoid doubling , we will use reverse function.
    d.reserve(1000);
    cout<<d.size()<<" "<<d.capacity()<<endl;
    //getting 1st element
    cout<<d.front()<<endl;
    //getting the last element
    cout<<d.back();
    //to remove the vector
    d.clear();
return 0;
}
