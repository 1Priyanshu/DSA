#include<iostream>
using namespace std;
#define m 1000000007;
typedef long long ll;

int main(){
    int n =50;
    ll fac =1;
    for(int i=1; i<=50; i++){
        fac = (i*fac)%m;
    }
    ll x = fac%m;
    cout << x << endl;
}