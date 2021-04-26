//CPP Code For Finding Kth Largest Element In An Array.

/*
             Approach
             ========
           
            We can implement this using a Max-Heap.
            
            1. We will create a max heap of size n.
            2. Insert all the Array elements into it.
            3. Pop K-1 elements from it.
            4. Now Kth Largest element will recide at the root of the max heap.
 
*/

#include <bits/stdc++.h>
using namespace std;
int KthLargest(vector<int>A, int k)
{
               priority_queue<int, vector<int>> pq(less<int>(), A);
               while (--k) 
               {
                              pq.pop();
                              
               }
               return pq.top();
}
 int main()
{
               int i,n,k;
               vector<int> A;
               cout<<"Enter the size of the array :";
               cin>>n;
               cout<<"\nEnter the elements of the array :";
               for(i=0;i<n;i++)
               {
                              int num;
                              cin>>num;
                              A.push_back(num);
               }
               cout<<"\nEnter the value of K :";
               cin>>k;
               cout << "\nK'th largest array element is " <<KthLargest(A, k);
               return 0;
}

/*
           Time-Complexity: O(n + k.(log(n))
           where n => size of the array , k => K'th largest number
           
           Sample Input/Output
           =====================
           
           Sample Input 1 :
           
           5
           9 8 7 6 5
           3
           
           Sample Output 1 :
           
           Enter the size of the array :
           Enter the elements of the array :
           Enter the value of K :
           K'th largest array element is 7
           
           Sample Input 2 :
           
           7
           19 8 17 6 15 0 3
           4
           
           Sample Output 2 :
           
           Enter the size of the array :
           Enter the elements of the array :
           Enter the value of K :
           K'th largest array element is 8
           
           Sample Input 3 :
           
           4
           99 9 999 9999
           4
           
           Sample Output 3 :
           
           Enter the size of the array :
           Enter the elements of the array :
           Enter the value of K :
           K'th largest array element is 9
*/


