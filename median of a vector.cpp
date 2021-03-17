/*
We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.
Input Format
First line contains the input n. Second and Third line contains n space separated integers.
Constraints
N < 1000
Output Format
Print the median in a single line.
Sample Input
5
1 3 5 7 9
2 4 6 8 10
Sample Output
5
Explanation
Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int n,k,i;

	//vector initialisition
	vector<int>v;
	cin>>n;
	for(i=0;i<2*n;i++)
	{
		cin>>k;

		//inserting into vector
		v.push_back(k);
	}
	
	//sorting the vector
	sort(v.begin(),v.end());
	
	//accessing a particulat element form a vector
	cout<<v[n-1];

return 0;
}
