//return the length of longest substring without repeating character.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    int lengthOfLongestSubstring(string s) {
        int n =s.length();
        int ans =0;
        int i=0, j=0;
        map<char,int> mp;
        while(j<n){
            if(mp.find(s[j])==mp.end()){
                mp[s[j]] = j;
                ans = max(ans, j-i+1);
                j++;
            }
            else{
                int flag = mp[s[j]];
                int temp = i;
                i = flag+1;
                ans = max(ans, j-i+1);
                for(int k=temp; k<i;k++){
                    mp.erase(s[k]);
                }
                mp[s[j]]= j;
                j++;
            }
        }
        return ans;
    }
    
};

//{ Driver Code Starts.

int main() {
	//code
	
    string s;
    cin>>s;
    Solution ob;
    cout << ob.lengthOfLongestSubstring(s)<< endl;
    
	
	return 0;
}
// } Driver Code Ends