// Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans = "";
        string curr_word = "";
        vector<string> v;
        for(int i=0; i<S.length(); i++){
            if(S[i]=='.'){
                v.push_back(curr_word);
                curr_word = "";
            }
            else{
                curr_word+=S[i];
            }
        }
        v.push_back(curr_word);
        
        for(int i=v.size()-1; i>=0; i--){
            ans+=v[i];
            if(i!=0) ans+='.';
        }
        return ans;
    } 
    
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends