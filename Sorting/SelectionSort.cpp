#include<iostream>
#include<array>
using namespace std;

void SelectionSortStableVersion(int *a, int n){
    for(int i=0; i<n-1; i++){
        int small = i;
        for(int j =i+1; j<n; j++){
            if(a[j]<a[small]){
                small = j;
            }
        }
        int key = a[small];
        while(small>i){
            a[small] = a[small-1];
            small--;
        }
        a[i] = key;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void SelectionSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int small =i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[small]){
                small = j;
            }
        }
        swap(a[i], a[small]);
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int a[] = {1,4,5 ,3,2};
    int n = sizeof(a)/sizeof(int);
    
    SelectionSort(a, n);
    SelectionSortStableVersion(a, n);
}