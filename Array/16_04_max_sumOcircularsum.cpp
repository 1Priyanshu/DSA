//max sum of a circular subarray ie, subarray can come from first to end then 
//again from beginning.
#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int maxSum = INT_MIN;
    int currensum=0;
    for(int i=0; i<n;i++){
        currensum+=arr[i];
        if(currensum<0){
            currensum = 0;
        }
        maxSum = max(maxSum, currensum);
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,n);
    int totalsum =0;
    for(int i=0; i<n; i++){
        totalsum+=arr[i];
        arr[i] = -arr[i];
    }
    wrapsum  = totalsum + kadane(arr, n);
    cout<<max(wrapsum, nonwrapsum)<<endl;
}