// Evaluation of a postfix expression(assumed correct)

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next;
};
stack <int> s;
int Perform(char c, int a, int b){
    int res;
    switch(c){
        case '+': res = a+b; break;
        case '-': res = b-a; break;
        case '*': res = b*a; break;
        case '/': res = b/a; break;
    }
    return res;
}
int evaluatePostfix(string str){
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        //if the character is blank space then continue 
        if(c == ' ')continue; 

        if(c=='+' || c=='-' || c=='*' || c=='/'){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            int res = Perform(c, a, b);
            s.push(res);
        }
        else{
            s.push((int)c - 48);  // conversion of char to int (48 is ASCII val of 0)
        }
    }
    return s.top();
}
int main(){
    // int n;
    // cin>>n;
    // char a[n];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    string str;
    cout<<"Enter a expression: ";
    getline(cin, str);
    cout<<evaluatePostfix(str)<<endl;
    return 0;
}