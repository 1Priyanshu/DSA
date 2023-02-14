// Given an n-digit large number in form of string, check whether it is divisible by 7 or not. Print 1 if divisible by 7, otherwise 0.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
        int n = num.length(), gSum = 0; 
        if (n % 3 == 1) { 
            num += "00"; 
            n += 2; 
        } 
        else if (n % 3 == 2) { 
            num += "0"; 
            n++; 
        } 
        int i, GSum = 0, p = 1; 
        for (i = n - 1; i >= 0; i--) { 
            int group = 0; 
            group += num[i--] - '0'; 
            group += (num[i--] - '0') * 10; 
            group += (num[i] - '0') * 100; 
      
            gSum = gSum + group * p; 
            p *= (-1); 
        } 
        return (gSum % 7 == 0); 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}  // } Driver Code Ends