// to get the longest palindromic subsequence in a given string.

#include<bits/stdc++.h> 
using namespace std; 


class Solution{   
public:
    int longestPalindromeSubseq(string s) {
        string b=s;
        reverse(b.begin(), b.end());
        int n = s.length();
        int ans =0;
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==b[j-1])dp[i][j] =1+dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][n];
    }

    //space optimized approach
     int LPSoptimized(string s) {
        int n = s.size();
        vector<int> dp(n, 0), dpPrev(n, 0);
        for (int i = n - 1; i >= 0; --i) {
            dp[i] = 1;
            for (int j = i+1; j < n; ++j) {
                if (s[i] == s[j]) {
                    dp[j] = dpPrev[j-1] + 2;
                } else {
                    dp[j] = max(dpPrev[j], dp[j-1]);
                }
            }
            dp.swap(dpPrev);
        }
        return dpPrev[n-1];
    }

};

// { Driver Code Starts.
int main() 
{ 
    string s;
    cin>>s;
    
    Solution ob;
    cout << ob.longestPalindromeSubseq(s) << endl;
    return 0; 
} 