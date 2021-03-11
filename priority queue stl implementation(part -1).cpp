//priority queue stl implementation 
#include <iostream>
#include<queue>
using namespace std;

int main() 
{
               //initialise the max heap
               priority_queue<int> pq_max;
               
               //initialize the min heap
               priority_queue<int , vector<int>,greater<int>> pq_min;
               
               //inserting user defined elements
               cout<<"enter the no of terms:\n";
               int n;
               cin>>n;
               for(int i=0;i<n;i++)
               {
                              int num;
                              cin>>num;
                              pq_max.push(num);//O(log n)
               }
               
               //remove element form the end
               while(!pq_max.empty())
               {
                              cout<<pq_max.top()<<":";
                              pq_max.pop();
               }

	return 0;
}
