//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long merge(vector<long long> &v, long long l, long long  mid, long long r){
        long long ans =0;
        vector<long long> t1, t2;
        for(long long i=l; i<=mid; i++){t1.push_back(v[i]);}
        for(long long i=mid+1; i<=r; i++){t2.push_back(v[i]);}
        long long idx =l, i=0, j=0;
        while(i<t1.size() && j<t2.size()){
            //cout<<"hi"<<" ";
            if(t1[i]<=t2[j]){
                v[idx++] = t1[i++];
            }
            else{
                v[idx++] = t2[j++];
                ans += t1.size() -i;
            }
            
        }
        while(i<t1.size()){
            v[idx++] = t1[i++];
        }
        while(j<t2.size()){
            v[idx++] = t2[j++];
        }
        //cout<<ans<<" ";
        return ans;
    }
    
    long long mergesort(vector<long long> &v, long long l, long long r){
        if(l>=r)return 0;
        long long mid = (l+r)/2;
        long long ans =0;
        ans += mergesort(v, l, mid);
        ans += mergesort(v, mid+1, r);
        
        ans += merge(v, l, mid, r);
        return ans;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        vector<long long> v;
        for(long long i =0;i<n; i++){v.push_back(arr[i]);}
        return mergesort(v, 0, n-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends