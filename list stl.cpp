#include <iostream>
#include<list>
using namespace std;
int main() {
    cout<<"Hello World!\n";
    
    //initialising and creating
    list<int> l;
    list<int> l1{1,2,3,4,5,6,7,8,9,0};
    
    //different data type
    list<string> l2{"apple","mango","banana","guava","raspberry","kiwi","orange","watermelon"};
    
    //adding the element in the list
    l2.push_back("pineapple");

    //iterate over the list
    for(auto x:l2)
    cout<<x<<"-->";
    cout<<endl;

    //sorting the list
    l2.sort();
    for(auto x:l2)
    cout<<x<<"-->";
    cout<<endl;
    
    //reversing the list
    l2.reverse();
    for(auto x:l2)
    cout<<x<<"-->";
    cout<<endl;
    
    //removing the first element
    l2.pop_front();
    for(auto x:l2)
    cout<<x<<"-->";
    cout<<endl;
    
    //printing the front element
    cout<<l2.front()<<"!!"<<endl;
    
    //adding to the front element
    l2.push_front("grapes");
    for(auto x:l2)
    cout<<x<<"-->";
    cout<<endl;
    cout<<l2.back()<<endl;
    l2.pop_back();
    for(auto x:l2)
    cout<<x<<"-->";
    cout<<endl;
    
    //iterete the loop using itetrator
    for(auto it=l2.begin();it!=l2.end();it++)
    {
                   cout<<(*it)<<" <*-*> ";
    } cout<<endl;
    
    //adding more element on the list
    l2.push_back("starfruit");
    l2.push_back("lemon");
    l2.push_back("starfruit");
    l2.push_back("starfruit");
    l2.push_back("starfruit");
    for(auto x:l2)
    cout<<x<<" <=> ";
    cout<<endl;
    
    //removing A fruit
    string f;
    cin>>f;
    l2.remove(f);
    for(auto x:l2)
    cout<<x<<" <=> ";
    cout<<endl;
    
    //erasing some element
    auto it=l2.begin();
    it++;
    it++;
    it++;
    l2.erase(it);
    for(auto x:l2)
    cout<<x<<" <=> ";
    cout<<endl;
    
    //insert at any pos
    it=l2.begin();
    it++;
    l2.insert(it,"chiku");
    for(auto x:l2)
    cout<<x<<" <=> ";
    cout<<endl;
    
    
    
    
    return 0;

}
