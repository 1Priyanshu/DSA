/*
Initialize ans = arr[0].
Iterate over all the elements of the array i.e. from i = 1 to i = n-1 
At the ith iteration ans = LCM(arr[0], arr[1], …….., arr[i-1]).
This can be done easily as LCM(arr[0], arr[1], …., arr[i]) = LCM(ans, arr[i]).
Thus at i’th iteration we just have to do ans = LCM(ans, arr[i]) = ans x arr[i] / gcd(ans, arr[i]) 
*/

#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

int lcmarray(vector<int> arr, int idx){
    // lcm(a,b) = (a*b/gcd(a,b))
    if(idx==arr.size()-1){
        return arr[idx];
    }
    int a = arr[idx];
    int b = lcmarray(arr, idx+1);
    return (a * b)/__gcd(a,b);
}
int main(){
    vector<int> arr = {10,15,20,25};
    cout<<"LCM of array numbers is : "<<lcmarray(arr, 0)<<endl;
    
}

//#include<numeric>
// std::lcm(a,b) is available for C++17 compilers.
//this is C++14.