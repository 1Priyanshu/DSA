//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    
    int longestCommonSubstr (string s, string t, int n, int m)
    {
        // your code here
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        int ans = 0;
        for(int i=1; i<n+1; i++){
            for(int j=1;j<m+1; j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    ans =max(ans, dp[i][j]);
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
 
    // int n, m; cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    int n=s1.length();
    int m= s2.length();
    Solution ob;

    cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
 
}
// Contributed By: Pranay Bansal

// } Driver Code Ends