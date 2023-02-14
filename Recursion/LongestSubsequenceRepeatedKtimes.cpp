//to find a subsequence of a string which is atleast K times repeated
// if multiple answers return lexographically largest;

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool issubsequence(string &t, string &s, int k){
        int n=s.length();
        int i=0;
        for(auto c: s){
            if(c==t[i]){
                if(++i==t.length()){
                    if(--k==0)return true;
                    i=0;
                }
            }
        }
        return false;
    }
    
    string longestSubsequenceRepeatedK(string s, int k) {
        int n= s.length();
        string ans ="";
        queue<string> q; q.push("");
        vector<int> a(26,0);
        vector<char> v;
        for(int i=0; i<n;i++)a[s[i]-'a']++;
        for(char c='a'; c<='z';c++){
            if(a[c-'a']>=k)v.push_back(c);
        }
        sort(v.begin(), v.end());
        while(!q.empty()){
            string currseq = q.front();
            q.pop();
            if(currseq.length()>=n)return ans;
            for(auto c: v){
                string newseq = currseq+ c;
                if(issubsequence(newseq, s, k)){
                    q.push(newseq);
                    ans = newseq;
                }
            }
        }
        return ans;
    }
};
int main()
{

    string s1;
    cin >> s1;
    int k; cin>>k;
    int n=s1.length();
    Solution ob;

    cout << ob.longestSubsequenceRepeatedK(s1,k) << endl;
 
}
