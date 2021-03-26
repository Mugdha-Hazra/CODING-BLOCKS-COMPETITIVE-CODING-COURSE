//finding all the subset of an array using backtracking technique

#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void getSubset(vector<int> &v, vector<vector<int>> &res, vector<int>&subset,int index)
{
               for(int i=index;i<v.size();i++)
               {
                              subset.push_back(v[i]);
                              res.push_back(subset);
                              getSubset(v,res,subset,i+1);
                              subset.pop_back();
               }
}
vector<vector<int>> subsetUtil(vector<int>&v)
{
               vector<int> subset;
               vector<vector<int>> res;
               res.push_back(subset);
               getSubset(v,res,subset,0);
               return res;
}
int main()
{
               vector<int > v;
               int i,n,k;
               cout<<"Enter the size of the array:\n";
               cin>>n;
               cout<<"Enter the elements of the array:\n";
               for(i=0;i<n;i++)
               {
                              cin>>k;
                              v.push_back(k);
               }
               vector<vector<int>> res;
               res=subsetUtil(v);
               cout<<"\nThe subsets are:\n";
               for(auto it:res)
               {
                              for(auto ptr:it)
                              {
                                  cout<<ptr<<" ";           
                              }
                              cout<<endl;
               }
               
               return 0;
}
/*
OUTPUT:
enter the size of the array: 5
Enter the elements of the array: 1 2 3 4 5

 the subset are:

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 5 
1 2 4 
1 2 4 5 
1 2 5 
1 3 
1 3 4 
1 3 4 5 
1 3 5 
1 4 
1 4 5 
1 5 
2 
2 3 
2 3 4 
2 3 4 5 
2 3 5 
2 4 
2 4 5 
2 5 
3 
3 4 
3 4 5 
3 5 
4 
4 5 
5 

*/
