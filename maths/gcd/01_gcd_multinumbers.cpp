//The GCD of three or more numbers equals the product of the
//prime factors common to all the numbers, but it can also be
//calculated by repeatedly taking the GCDs of pairs of numbers. 

#include <bits/stdc++.h>
using namespace std;

// recursive implementation
int GcdOfArray(vector<int>& arr, int idx)
{
    if (idx == arr.size() - 1) {
        return arr[idx];
    }
    int a = arr[idx];
    int b = GcdOfArray(arr, idx + 1);
    return __gcd(a, b); // __gcd(a,b) is inbuilt library function
}

int main()
{
    vector<int> arr = { 1,2,4 };
    cout << GcdOfArray(arr, 0) << "\n";

    arr = { 2, 4, 6, 8 };
    cout << GcdOfArray(arr, 0) << "\n";
    return 0;
}


// OR

/*
#include<iostream>
using namespace std;
int gcd(int a, int b) {
   if (a == 0)
      return b;
   return gcd(b%a, a);
}
int getArrayGcd(int arr[], int n) {
   int res = arr[0];
   for(int i = 1; i < n; i++) {
      res = gcd(arr[i], res);
   }
   return res;
}
main() {
   int arr[] = {4, 8, 16, 24};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "GCD of array elements: " << getArrayGcd(arr, n);
} 
*/