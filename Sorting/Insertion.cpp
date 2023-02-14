#include<iostream>
using namespace std;


void InsertionSort(int *a, int n){
    int i, j ,temp;

    for(int i=1; i<n; i++){
        j = i-1;
        temp = a[i];
        while (j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {7, 5, 9, 3, 1};
    int n = sizeof(a)/sizeof(int);
    InsertionSort(a, n);

}