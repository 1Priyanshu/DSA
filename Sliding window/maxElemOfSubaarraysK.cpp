// return a vector whose elements are the maximum elements of subarrays of size k.

// Eg:  A[] = {1,3,-1,-3,5,3,6,7} and k(window size) =3;
// then  Ans[] = {3,3,5,5,6,7}


// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        list<int> l;
        int i=0, j=0;
        while(j<nums.size()){
            while(!l.empty() && l.back()<nums[j]){
                l.pop_back();
            }
            l.push_back(nums[j]);
            if(j-i+1<k){
                j++; continue;
            }
            else if(j-i+1==k){
                ans.push_back(l.front());
                if(nums[i]==l.front()){
                    l.pop_front();
                }
                i++; j++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        vector<int> ans = ob.maxSlidingWindow(Arr, K);
        for(auto i: ans){cout<<i<<" ";}
        cout<<endl;
    }
    return 0; 
}   // } Driver Code Ends