//Using kadane's algorithm 
//time complexity = O(n);

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int currsum=0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum =0;
        }
        maxSum = max(currsum, maxSum);
    }
    cout<<maxSum<<endl;
}
