#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next;
    
};
bool checkBalanParan( int n,char exp[]){
    stack <char> s;
    for(int i=0; i<n; i++){
        if(exp[i]=='('|| exp[i]=='{'|| exp[i]=='['){
            s.push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if( s.top()!= exp[i]) return false;
            else s.pop();
        }
    }
    return s.empty() ? true : false;
}
int main(){
    int n;
    cin>>n;
    char exp[n];
    for(int i=0; i<n; i++){
        cin>>exp[i];
    }
    if(checkBalanParan(n, exp)) cout<<"Balanced"<<endl;
    else cout<<"Not balanced"<<endl;
    return 0;
}