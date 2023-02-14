// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    
    private: 
        void solve(string &S, int idx, set<string> &st){
            if(idx>=S.size()){
                st.insert(S);
                return;
            }
            for(int j= idx; j<S.size(); j++){
                swap(S[idx], S[j]);
                //sort(S.begin() + idx + 1, S.end());
                solve(S, idx+1, st);
                //backtrack
                swap(S[idx], S[j]);
            }
        }
	public:
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> v;
		    set<string> st;
		    string tmp = S;
		    sort(tmp.begin(), tmp.end());
		    int idx =0;
		    solve(tmp, idx, st);
            for(auto i = st.begin(); i!=st.end(); i++){
                v.push_back(*i);
            }
		    return v;

            // Method 2
            // vector<string> v2;
            // do{
            //     v2.push_back(tmp);
            // }while(next_permutation(tmp.begin(), tmp.end()));

            //return v2;
             
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends