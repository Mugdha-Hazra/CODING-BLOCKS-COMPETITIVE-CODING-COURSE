/*
#include <bits/stdc++.h>
using namespace std;
int replaceTile(long long int m,long long int n,long long int s)
{   if(n<m)
    return 1;
    s+=replaceTile(m,n-1,s) + replaceTile(m,n-m,s);
    return s;}
int main() 
{	long long int t;
	cin>>t;
	while(t--)
	{long long int m,n;
    cin>>n>>m;
    cout <<replaceTile(m,n,0)%1000000007<<"\n";
	}return 0;}
*/
#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#define ll long long
#define MOD 1000000007
using namespace std;


ll compute(ll n, ll m){
    // Base Case
    int score[n+1];
    score[0] = 0;
    score[1] = 1;
    for(int j=2; j<=n;j++){
        // Checks:
        if (m>j) {
            score[j] = 1;
        }
        else if (m==j){
        score[j] = 2;
        }
        else {
        score[j] = (score[j-m]+score[j-1])%MOD;
        }
    }
    return score[n];
}


int main(){
    ll t,n,m;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> n >> m;
        ll ans = compute(n,m);
        cout << ans%MOD << endl;
    }
}
