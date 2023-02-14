// C++ program to find GCD of two numbers
#include<iostream>
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;

    if(a==b) return a;

    if(a>b){
        return gcd(a-b, b);
    }
    return gcd(a, b-a);


}

int main(){
    int a; cin>>a;
    int b; cin>>b;
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<"\n";
return 0;
}