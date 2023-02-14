// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.

    void solve(vector<int> &v, int sum, int idx, vector<vector<int>> &vv, vector<int> &v2){
        //vector<vector<int>> vv;
        if(sum<0){
            return;
        }
        if(sum==0){
            vv.push_back(v2);
            return;
        }
        for(int j = idx; j<v.size(); j++){
            v2.push_back(v[j]); 
            solve(v, sum-v[j], j, vv, v2); 
            v2.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum(vector<int> &A, int B) {
        vector<vector<int>> v;
        sort(A.begin(), A.end());
        // set<int> st;
        // for(int i=0; i<A.size(); i++){
        //     st.insert(A[i]);
        // }
        // A.clear();
        // for(auto i = st.begin(); i!=st.end(); i++){
        //     A.push_back(*i);
        // }
        auto ip = unique(A.begin(), A.end());
        A.resize(distance(A.begin(), ip));            // to remove dupliacates from a sorted arr
        vector<int> v2;
        solve(A, B, 0, v, v2);
        return v;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n"; 
        
    }
}	  // } Driver Code Ends