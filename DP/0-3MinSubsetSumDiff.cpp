// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  
    vector<int> subsetsum(int arr[], int n, int sum){
    
        
        bool dp[n+1][sum+1];
        
        for(int i=0; i<n+1; i++){
            for(int j=0; j<sum+1; j++){
                if(i==0){
                    dp[i][j]=false;
                }
                if(j==0){
                    dp[i][j]=true;
                }
            }
        }
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                if(arr[i-1]<=j){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        vector<int> v;
        for(int i=0; i<sum+1; i++){
            if(dp[n][i]){
                v.push_back(i);
            }
        }
        return v;
        
    }
  
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0 ;i <n; i++){
	        sum+=arr[i];
	    }
	    //vector<vector<bool>> dp(n+1, vector<bool>(sum+1, -1));
	    vector<int> v =  subsetsum(arr,n, sum/2);
	    int idx =0;
	   // for(int i=sum/2+1; i>=0; i--){
	   //     if(dp[n][i]==true){
	   //         idx = i;
	   //         break;
	   //     }
	   // }
	    
	    int k = v[v.size()-1];
	    return sum-2*k;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends