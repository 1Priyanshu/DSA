// C++ Program Illustrating Naive Approach to
// Find if There is a Pair in A[0..N-1] with Given Sum
// Using Two-pointers Technique

#include<bits/stdc++.h>
using namespace std;

int isPairSum(int *arr, int n, int val){
    // represents 1st pointer
    int i=0;
    //represents last pointer
    int j=n-1;
    while(i<j){
        // If we find a pair
        if(arr[i]+arr[j]==val){
            return 1;
        }
        // If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
        else if(arr[i]+arr[j]<val){
            i++;
        }
        // If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
        else{
            j--;
        }
    }
    return 0;
}

int main(){
    int arr[] = {1,4,6,3,8,10,2};
    int n = sizeof(arr);
    int key = 13;

    // array should be sorted before using two-pointer technique
    sort(arr, arr+n);

    //function call
    cout<<(bool)isPairSum(arr, n, key);
    
}