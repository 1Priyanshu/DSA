// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution {
    
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.length(); int m= str2.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1; j<=m;j++){
                if(str1[i-1]==str2[j-1]){dp[i][j]=1+dp[i-1][j-1];}
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
    // LCS length equals to dp[n][m]

        string temp="";
        int i=n, j=m;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                temp.push_back(str1[i-1]);
                i--; j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]){
                    temp.push_back(str1[i-1]);
                    i--;
                }
                else{
                    temp.push_back(str2[j-1]);
                    j--;
                }
            }
        }
        while(i>0){
		    temp.push_back(str1[i-1]);
		    i--;
	    }
	
	    while(j>0){
		    temp.push_back(str2[j-1]);
		    j--;
	    }
	    reverse(temp.begin(), temp.end());
	    return temp;     
    }
};

// { Driver Code Starts.
int main() 
{ 
    string s, t;
    cin>>s>>t;
    
    Solution ob;
    cout << ob.shortestCommonSupersequence(s, t) << endl;
    return 0; 
} 
  // } Driver Code Ends