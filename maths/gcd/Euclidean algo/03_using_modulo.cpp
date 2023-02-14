#include<iostream>
#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
    
}

int main(){
    optimize();
  int a; cin>>a;
  int b; cin>>b;
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<"\n";
} 