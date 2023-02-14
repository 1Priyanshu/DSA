// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int longestCommonSubsequence(string s, string t) {
        int n=s.length();
        int m= t.length();
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        //for(int i=0; i<n; i++){dp[i][0]=0;}
        //for(int i=0;i<m;i++){dp[0][i]=0;}
        for(int i=1;i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(s[i-1]==t[j-1]){dp[i][j]=1+dp[i-1][j-1];}
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }


    // to print 
    /*
        string ans;
        int i=n, j=m;
        while(i>0 && j>0){
            if(a[i-1]==b[j-1]){
                ans.push_back(a[i-1]);
                i--; j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]){i--;}
                else{j--;}
            }
        }
        reverse(all(ans));
        return ans;
    */
};

// { Driver Code Starts.
int main() 
{ 
    string s, t;
    cin>>s>>t;
    
    Solution ob;
    cout << ob.longestCommonSubsequence(s, t) << endl;
    return 0; 
} 
  // } Driver Code Ends