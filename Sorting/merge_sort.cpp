// merge sort - time complexity - O(nlogn);
// space complexity  - O(n);
// stable sorting



#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int l, int mid, int r){
    vector<int> temp1, temp2;
    for(int i=l; i<=mid; i++){temp1.push_back(v[i]);}
    for(int i=mid+1; i<=r; i++){temp2.push_back(v[i]);}
    int idx =l, i=0, j=0;
    while(i<temp1.size() && j<temp2.size()){
        if(temp1[i]<=temp2[j]){v[idx++]= temp1[i++]; }
        else{v[idx++]=temp2[j++];}
    }
    while(i<temp1.size()){v[idx++]=temp1[i++];}
    while(j<temp2.size()){v[idx++]=temp2[j++];}
}

void solve(vector<int> &v, int l , int r){
    if(l>=r) return;
    int mid = (l+r)/2;
    solve(v, l, mid); solve(v, mid+1, r);
    merge(v, l, mid, r);
}

void merge_sort(vector<int> &v){
    int n =v.size();
    int l = 0, r = n-1, mid =(l+r)/2;
    solve(v, l, r);
}

int main(){
    vector <int> v = {3,6,2,12,21,8,0,5,9,10,15};
    merge_sort(v);
    for(auto i: v){cout<<i<<" ";}cout<<endl;
}