// to find the smallest positive missing number from an array having negtive,
//positive and 0 as its element.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int N = 1e6 + 2;
    bool a[N];
    for(int i=0; i<N;i++){
        a[i] = false;
    }
    int ans =-1;
    for(int i=0; i<n;i++){
        if(arr[i]>=0){
            a[arr[i]] = true;
        }
    }
    for(int i=0; i<N;i++){
        if(a[i]==false){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}