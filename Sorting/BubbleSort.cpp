#include"iostream"
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v;

    v = {1, 4 , 34, 23, 19};
    int n= v.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]>v[j]){
                swap(v[i], v[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
