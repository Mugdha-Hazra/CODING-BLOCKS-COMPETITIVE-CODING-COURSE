//Maximum XOR value of a pair from a range
/* Here we will xor both the given numbers and then count the number of digits.
Then maximum value would be the all ones int the binary representation so will calculate the power of pow(2,c)-1;
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () 
{       int x,y,p,c=0;
	cin>>x>>y;
	p=x^y;
	while(p)
	{c++;
	 p=p>>1;}
	cout<<pow(2,c)-1<<"\n";
	return 0;
}
