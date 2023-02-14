#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
long long mulmod(long long a, long long b, long long mod)
{
    long long res = 0; 
    a = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res + a) % mod;
        a = (a * 2) % mod;
        b /= 2;
    }
    return res % mod;
}

int main(){
    //int a = 999999998;
    //int b = 999999998;
    //int ans = mulmod(a, b, 1000000007);
    ll a = 999999998;
    ll b= 999999998;
    long long ans = ((a%mod)*(b%mod))%mod;
    cout<<ans<<endl;
}