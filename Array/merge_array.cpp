#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

//Function to merge arrays
void mergeArrays(int a[], int b[], int n, int m)
{
    // Declaring a map.
    // using map as a inbuilt tool
    // to store elements in sorted order.
    map<int, bool> mp;
     
    // Inserting values to a map.
    for(int i = 0; i < n; i++)
    mp[a[i]] = true;
     
    for(int i = 0;i < m;i++)
    mp[b[i]] = true;
     
    // Printing keys of the map.
    for(auto i: mp)
    cout<< i.first <<" ";
}

int main(){
    int a1[] = {1,11,5,7,9};
    int a2[] = {0,2,4,6,8,10};

    int n1  =sizeof(a1)/sizeof(int);
    int n2  =sizeof(a1)/sizeof(int);
    mergeArrays(a1, a2,n1,n2);
  
    return 0;
}



