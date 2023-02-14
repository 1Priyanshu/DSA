#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int i=0, j=0;
	    unordered_map<char, int> h;
	    int k = pat.length();
	    
	    for(auto i: pat){
	        h[i]++;
	    }
	    int cnt = h.size();
	    int ans =0;
	    while(j<txt.length()){
	        if(h.find(txt[j])!=h.end()){
	            h[txt[j]]--;
	            if(h[txt[j]]==0) cnt--;
	        }
	        
	        if(j-i+1<k) j++;
	        else if(j-i+1==k){
	            if(cnt==0) ans++;
	            if(h.find(txt[i])!=h.end()){
	                h[txt[i]]++;
	                if(h[txt[i]]==1) cnt++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends