//build a hashtable for a custom class
//key on the hashtable is a custom object i.e is not same as the standard data type like string
//we will implement it using unordered map ;
//key is of user defined type

//here key's type = student and value = int
//for making custom class of key we have to do 2 things
//1: define your own hash function
//2: overload the == operator { because if we want to find a student  with a particular name then it might happen that 2 student having same name but different roll number so we have to overload the operator so that we could find the correct student} we have to do it in student class
//
#include <iostream>
#include<cstring>
#include<unordered_map>//necessary for unordered map
using namespace std;

class Student
{
               public:
               
               string firstname;
               string lastname;
               string rollno;
               
               Student(string f,string l,string no)
               {
                              firstname = f;
                              lastname = l;
                              rollno = no;
               }
               
               //overloading the == operator for comparing 2 students
               //we are making this func as the const function because we are not changing any data member in this function
               bool operator==(const Student &s)const{
                              //if thr roll no of both the student are same the both the student are same
                              return rollno==s.rollno?true:false;
               }
               
};

//define a hash function
class HashFn{
  
  public:
  
  //this class must have 1 method that should return size_t its like unsigned int : it is used to represent some memory in bytes
  // we'll overload this operator by the following steps
  
  size_t operator()(const Student &s/*accept hash value of a particular student by refrence*/)const{
           return s.firstname.length()+s.lastname.length();      
  }
  
               
};

int main() 
{
               //we have to tell the hashmap the we have to use the above hash function
               //we will use an unordered map to store the key value pair and pass the hashfunctn
               unordered_map<Student,int,HashFn> student_map;
                Student s0("Mugdha","Hazra","106");
                 Student s1("Madhu","Hazra","038");
                  Student s2("Raju","Hazra","215");
                   Student s3("Mugdha","Hazra","025");
                   
               //adding student and their marks to hashmap
               
               student_map [s0]= 100;
               student_map [s1]= 90;
               student_map [s2]= 80;
               student_map [s3]= 70;
               
               //iterate over all students
               for(auto s:student_map)
               {              //as it is the key - value pair so we have to assign it first and second 
                              cout<<"Name: "<<s.first.firstname<<" RollNo.: "<<s.first.rollno<<" Marks: "<<s.second<<endl; 
                              
               }
               
               // if we want to find for a particular roll no.
               // we want the marks of student s3
               //here .second is not required because its a key value pair (where we insert the key and it returns value)
               cout<<"Marks of 4th student: "<<student_map[s3]<<endl;
               return 0;
}
