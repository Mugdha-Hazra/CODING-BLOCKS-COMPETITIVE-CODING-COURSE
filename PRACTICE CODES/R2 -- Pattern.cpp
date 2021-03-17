/*
Take as input N, a number. Print the pattern like this.

for N = 5

5

3

1

2

4

Input Format
Number

Constraints
1 <= N <= 100

Output Format
Pattern

Sample Input
10
Sample Output
9

7

5

3

1

2

4

6

8

10
*/
#include<iostream>
using namespace std;
int main() 
{
	int n,t=0,i;
	cin>>n;
	t=n;
	while(n>0)
	{
		if(n%2==1)
		cout<<n<<endl;
		n--;
	}
	for(i=1;i<=t;i++)
	{
		if(i%2==0)
		cout<<i<<endl;
	}

	return 0;
}
