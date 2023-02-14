//reversing a string using stack
// time complexity = O(n), space complexity = O(n);

#include<bits/stdc++.h>
using namespace std;

class node{
    private: 
    int data;
    node * link;

    public: 
    void pop();
    void push();
};
void reverse(char *c, int n){  // char *c or char c[] is the same thing.
    stack<char> s;
    //loop for push
    for(int i=0; i<n;i++){
        s.push(c[i]);
    }
    //loop for pop
    for(int i=0; i<n; i++){
        c[i] = s.top();
        s.pop();
    }
}
int main(){
    char c[51];
    cout<<"Enter a String: ";
    cin>>c;
    reverse(c, strlen(c));
    cout<<c;
}
