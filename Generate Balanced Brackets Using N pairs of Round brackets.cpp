// generate balanced brackets using N pairs of Round brackets
/*
conditions:
1. at any index i if we want to put an opening brackets
then the current count of opening brackets should be less than n(size/2)
2. if we want to put an closing bracket then we must 
ensure the count of closing brackets should be less than opening brackets.
*/
#include <iostream>
using namespace std;
//generate balanced brackets using N pairs of Round brackets
void generate_brackets(char *out,int n,int idx,int open,int close)
{//base case
 if(idx==2*n)
 {
                out[idx]='\0';
                cout<<out<<endl;
                return;
 }
 //recursion case
 //2 operation (i) open brackets
 if(open<n)
 {
                out[idx]='(';
                generate_brackets(out,n,idx+1,open+1,close);
 }
 if(close<open)
 {
               out[idx]=')';
               generate_brackets(out,n,idx+1,open,close+1);
 }
 return;
}
int main() {
               int n;
               cin>>n;
               char out[1000];
               int idx=0;
               generate_brackets(out,n,0,0,0);
	// your code goes here
	return 0;
}
