#include<bits/stdc++.h>
using namespace std;
const int n = 5;
int A[n];

void program(int n){
    if(n<1){
        for(auto i : A){
            cout<<i;
        }
        cout<<" ";
    }
    else{
        A[n-1] = 0;
        program(n-1);
        A[n-1] = 1;
        program(n-1);
    }
}

int main(){
    program(n);
    return 0;
}