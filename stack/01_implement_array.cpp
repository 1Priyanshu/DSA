//implementation of stack baisc functions via array

#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top =-1;

void push(int x){
    if(top==MAX_SIZE-1){
        cout<<"Error: stack overflow"<<endl;
        return;
    }
    A[++top] = x;
}
void pop(){
    if(top==-1){
        cout<<"empty stack"<<endl;
        return;
    }
    top--;
}
int Top(){
    return A[top];
}
void print(){
    cout<<"Stack: ";
    for(int i=0; i<=top;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
push(1); print();
push(5); print();
push(12); print();
pop(); print();
cout<<Top()<<endl;
pop(); print();
}