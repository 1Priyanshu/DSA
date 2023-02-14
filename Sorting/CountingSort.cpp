#include"bits/stdc++.h"
using namespace std;
#define RANGE 255

void CountingSort(char a[], int n){
    int count[RANGE+1];
    char output[n];

    memset(count, 0, sizeof(count));

    for(int i=0; a[i]; i++){
        count[a[i]]++;
    }
    for(int i=1; i<RANGE+1;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1; i>=0; i++){
        output[count[a[i]-1]] = a[i];
        count[a[i]]--;
    }
    for(int i=0; i<n ;i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
}

int main(){
    char arr[] = "priyanshuupman";
    int n = strlen(arr);

    CountingSort(arr, n);
    
}