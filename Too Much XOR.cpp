#include <bits/stdc++.h>  // This will work only for g++ compiler.


#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

//short hand for usual tokens
#define pb push_back
#define fi first
#define se second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())


using namespace std;

// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;


void insert_move(vector<vector<long long> >&moves, ll start, ll a, ll b, ll n)
{
    for(int i=start;i<n;){
        vector<long long> temp;
        temp.pb(a+1);
        temp.pb(b+1);
        temp.pb(i+1);
        moves.pb(temp);
        i++;
        i++;
    }
}


void abc1(vector<long long> &value)
{
    ll n = value.size();

    ll k = 1,x=-1;
    for(int i=3;i<n;i+=2){
        if(value[i]==value[k]){
            continue;
        }
        else{
            x=i;
            break;
        }
    }
    vector<vector<long long> >moves;
    if(x==-1){
        cout<<0<<endl;
        return;
    }
    insert_move(moves, 0, k, x,n);  
    insert_move(moves, 1, 0, 2,n);
    cout<<moves.size()<<endl;
    for(int i=0; i<moves.size(); i++){
        cout<<moves[i][0]<<" "<<moves[i][1]<<" "<<moves[i][2]<<endl;
    }
    return;
}

void abc(){
    ll n;
    cin>>n;
    vector<long long> value(n);
    for(int i=0;i<n;i++)
        cin>>value[i];

    if(n==1){
        cout<<0<<endl;
        return;
    }
    else if(n==2){
        if(value[0]==value[1])
            cout<<-1<<endl;
        else
            cout<<0<<endl;
        return;
    }
    else if(n==3){
        if((value[0]==value[2]) && (value[0]!=value[1])){
            cout<<0<<endl;
            return;
        }
        else if((value[0]==value[2]) && (value[0]==value[1])){
            if(value[0]==0){
                cout<<-1<<endl;
                return;
            }
            cout<<1<<endl;
            cout<<"1 3 2"<<endl;
            return;
        }
        else if(value[1]==0){
            if(value[0]!=0){
                cout<<1<<endl;
                cout<<"1 2 3"<<endl;
                return;
            }
            if(value[2]!=0){
                cout<<1<<endl;
                cout<<"3 2 1"<<endl;
                return;
            }
        }
        cout<<-1<<endl;
        return;
    }
    int count0 = 0;
    for(int i=0; i<n; i++){
        if(value[i]==0)
            count0++;
    }
    int count1 = 0;
    for(int i=0; i<n; i++){
        if(value[i]==1)
            count1++;
    }
    if(count0 == n){
        cout<<-1<<endl;
        return;
    }
    ll k = 0,x=-1;
    for(int i=2;i<n;i+=2){
        if(value[i]==value[k]){
            continue;
        }
        else{
            x=i;
            break;
        }
    }
    vector<vector<long long> >moves;
    if(x==-1){
        if(value[0]==0){
            abc1(value);
            return;
        }
        insert_move(moves, 1, 0, 2,n);
        cout<<moves.size()<<endl;
        for(int i=0; i<moves.size(); i++){
            cout<<moves[i][0]<<" "<<moves[i][1]<<" "<<moves[i][2]<<endl;
        }
        return;
    }
    insert_move(moves, 1, k, x,n);
    insert_move(moves, 0, 1, 3,n);
    cout<<moves.size()<<endl;
    for(int i=0; i<moves.size(); i++){
        cout<<moves[i][0]<<" "<<moves[i][1]<<" "<<moves[i][2]<<endl;
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int tc = 1;
    cin>>tc;
    while(tc--){
        abc();
    }

    return 0;
}
