//string class
#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
               //initilasing a string
               string s0;
               string s1("hello!! hii");
               string s2="heyy!! wassup?";
               string s3(s2);
               string s4=s3;
               char a[]={'a','p','p','l','e'};
               string s5(a);
               
               cout<<s0<<"*"<<"\n";
               cout<<s1<<"*"<<"\n";
               cout<<s2<<"*"<<"\n";
               cout<<s3<<"*"<<"\n";
               cout<<s4<<"*"<<"\n";
               cout<<s5<<"*"<<"\n";
               
               //string empty functn
               (s0.empty()?cout<<"s0 string is empty\n":cout<<"s0 string is not empty\n");
               
               //append function (to concatenate two or more strings!!)
               s0.append("I Love c++ programming!!");
               cout<<s0<<"\n";
               
               s0= s0 + "also i love python programming!!";
               cout<<s0<<"\n";
               
               //length function and clear function
               cout<<s0.length()<<"\n";
               //clear function
               s0.clear();
               //s0 is erased.
               cout<<s0.length()<<"\n";
               
               //string compare function
               s0="APPLE";
               s1="MANGO";
               cout<<s1.compare(s2)<<"\n"; //return  negative value if s1 is lexographically smaller that s2    (-1)
              
			    cout<<s1.compare(s1)<<"\n"; //return  zero value if s1 is lexographically equal that s1         (0)
			
				 cout<<s2.compare(s1)<<"\n"; //return  positive value if s2 is lexographically larger that s1   (1)    
				 
				 //operator overloadig
				 (s0>s1?cout<<"APPLE is greater\n":cout<<"MANGO is greater\n");   
				 
				 //accessing ith character of a string
				 cout<<s0[3]<<" "<<s0<<"\n"   ;
				 
				 //finding substring in a string 
				 string s = "i wanna have some apple juice.";
				 cout<<s<<"\n";
				 int index = s.find("apple");
				 cout<<index<<"\n";   
				 
				 // remove a word from the string
				string word="apple";
				int len= word.length();
				s.erase(index,len+1);
				cout<<s<<"\n";
				
				//iterate over all character of a string
				for(int i=0;i<s.length();i++)
				{
					cout<<s[i]<<":";
				}
				cout<<"\n";
				
				// iterate with iterator
				for(string::iterator it = s.begin();it!=s.end();it++)
				{
					cout<<(*it)<<"_";
				}
                cout<<"\n";
				
				//for each loop
			                //only allowed in c++11.
				for(char c:s)
				{
					cout<<c<<"`";
				}
			
               
	return 0;
}
