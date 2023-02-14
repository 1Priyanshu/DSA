#include<bits/stdc++.h>
using namespace std;

stack <char> s;

int isParantheses(char c){
    if(c=='(' || c=='{' || c=='[') return 2;
    else if(c==')' || c=='}' || c==']') return 1;
    return 0;
}
int isOperator(char c){
    if(c=='^' || c=='+' || c=='-' || c=='*' || c=='/') return 1;
    return 0;
}
int prec(char c){
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}

string infixToPostfix(string a){
    string res = "";
    for(int i=0 ; i<a.length(); i++){
        char c = a[i];
        if(isParantheses(c)==2){
            s.push(c);
        }
        else if(isParantheses(c)==1){
            while(!s.empty() && isParantheses(s.top())!=2){
                res = res+=s.top();
                s.pop();
            }
            s.pop();
        }
        else if(isOperator(c)==1){
            while(!s.empty() &&  prec(c) <= prec(s.top()) ){
                res+=s.top();
                s.pop();
            }
            s.push(c);
        }
        else{
            res+=c;
        }
    }
    
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }
    return res;
}

int main(){
    string exp;
    cout<<"Enter a expression: ";
    cin>>exp;
    string res = infixToPostfix(exp);
    cout<<res<<endl;
    return 0;

}