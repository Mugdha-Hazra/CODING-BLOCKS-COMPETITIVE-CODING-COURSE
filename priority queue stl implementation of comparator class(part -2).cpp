#include <iostream>
#include<queue>
#include<cstring>
using namespace std;

class Personcompare{
               public:
               bool operator()(Person A,Person B)
               {
                              return A.age < B.age;
               }
               
};

class Fun{
               public:
               void operator()(string s)
               {
                              cout<<"having fun with strings "<<s;
               }
};

 class Person{
                public:
                string name;
                int age;
                
                Person()
                {
                               
                }
                Person(string n, int a)
                {
                               name = n;
                               age = a;
                }
 };

int main() 
{
               Fun f;//constructor
               f("C++");//overloaded function call()operator where f is an object.
               priority_queue<Person,vector<Person>,Personcompare> pq;
               int n;
               cout<<"enter the no. of persons: ";
               for(int i=0;i<n;i++)
               {
                              string name;
                              int age;
                              cout<<"name and age "<<i;
                              cin>>name>>age;
                              
                              Person p(name,age);
                              pq.push(p);
               }
               
               int k;
               for(int i=0;i<3;i++)
               {
                              Person p=pq.top();
                              cout<<p.name<<" "<<p.age<<endl;
                              pq.pop();
               }
               return 0;
}
