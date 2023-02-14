//Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
//Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.

// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int n1 = str1.length();
        int n2 = str2.length();
        
        
        if(n1!=n2){
            return false;
        }
        bool arr1[MAX_CHARS] = {false};
        
        int arr2[MAX_CHARS];
        memset(arr2, -1, sizeof(arr2));
        
        for(int i=0; i<n1; i++){
            if(arr2[str1[i]]==-1){
                
                if(arr1[str2[i]]==true){
                    return false;
                }
                
                arr1[str2[i]] = true;
                
                arr2[str1[i]] = str2[i];
            }
            else if(arr2[str1[i]]!=str2[i]){
                return false;
            }
        }
        return true;
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends