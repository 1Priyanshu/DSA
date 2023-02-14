// C++ program to find GCD of two numbers
//Time Complexity: O(a * b)
#include<iostream>
#include<string>
#include<string.h>
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int static dp[1001][1001];

int gcd(int a, int b){
    //Everything divides 0
    if(a==0) return b;
    if(b==0) return a;

    if(a==b) return a;

     // if a value is already 
    // present in dp
    if(dp[a][b] != -1) 
        return dp[a][b];

    // a is greater
    if (a > b)
        dp[a][b] = gcd(a-b, b);
    
    // b is greater
    else
        dp[a][b] = gcd(a, b-a);
    
    // return dp
    return dp[a][b];

}

int main(){
    int a; cin>>a;
    int b; cin>>b;
    //We can use memset() to set all values as 0 or -1 for integral
    //data types also. It will not work if we use it to set as other values.
    //The reason is simple, memset works byte by byte.  
    memset(dp, -1, sizeof(dp));
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<"\n";
return 0;
}