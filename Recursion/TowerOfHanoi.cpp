#include"bits/stdc++.h"
#pragma GCC optimize("Ofast")
using namespace std;
 
#define ll long long
#define db double
#define el "\n"
#define ld long double
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define all(ds) ds.begin(), ds.end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define popcount __builtin_popcount
typedef pair<long long, long long> ii;
typedef pair<double,double> pdd;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef vector< long long > vi;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
typedef priority_queue <ll> pq;
template<class T> ll LB(vector<T> &v,T a){return lower_bound(v.begin(),v.end(),a)-v.begin();}
template<class T> ll UB(vector<T> &v,T a){return upper_bound(v.begin(),v.end(),a)-v.begin();}
 
const ll mod = 1000000007;
const ll INF = (ll)1e18;

void program(int n, char A, char B, char C){

    if(n==1){
        cout<<"Move disk from " << A<<" to "<<B<<el;
        return;
    }
    else{
        program(n-1, A, C, B);
        cout<<"Move disk from " << A<<" to "<<B<<el;
        program(n-1, C, B, A);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n = 3;
    char A = 'A';
    char B = 'B';
    char C = 'C';
    program(n, A, B, C);
    return 0;
}