//string tokanisation using strtok function
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	// strtok -> inbuild function 
	// function declaration -> char *strtok(char *S,char * delimeter)
	// this function returns a token on every function call
	// on first call function should be passed with string 's'
	// on subsequent calls we should pass the string argument as null

	
		char s[10000]=" today , is a rainy , day , indeed.";
		char *ptr = strtok(s,",");
		cout<<ptr<<"\n";
		while(ptr!=NULL)
		{
			char *ptr = strtok(NULL,",");
			cout<<ptr<<"\n";
		}
	return 0;
}

