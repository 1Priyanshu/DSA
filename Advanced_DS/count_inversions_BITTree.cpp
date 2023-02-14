//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    vector<long long> bit;
    
    
    long long sum(vector<long long> &v, long long idx){
        long long sum =0;
        for(; idx>0; idx-=(idx&-idx)){
            sum += bit[idx];
        }
        return sum;
    }
    void update(long long idx, long long val){
        for(; idx<bit.size();idx+=(idx&-idx)){
            bit[idx] += val;
        }
    }
    
    long long solve(vector<long long> &v, long long n){
        long long ans =0;
        long long maxval = *max_element(v.begin(), v.end());
        bit.resize(maxval+1, 0);
        for(long long i=1; i<=n; i++){
            ans += sum(v,maxval) - sum(v,v[i]);
            update(v[i], 1);
        }
        return ans;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        map<long long, long long> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=0;
        }
        int cnt=1;
        for(auto &itr: mp){
            itr.second = cnt++; 
        }
        for(int i=0;i<n;i++){
            arr[i] = mp[arr[i]];
        }
        vector<long long> v; v.push_back(0);
        for(long long i =0;i<n; i++){v.push_back(arr[i]);}
        return solve(v, n);
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