#include<bits/stdc++.h>
using namespace std;
 // template <class Type, class Container = deque<Type> > class stack;
/* Type – is the Type of element contained in the std::stack.
 It can be any valid C++ type or even a user-defined type. */
stack <class node* > s; 
//stack <int> stack;

class node{
    public:
    int data;
    node * next;
    void push();
    void pop();

};
node * top = NULL;

void print(){
    node *temp;
    temp = top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    // for(int i=0; i<s.size(); i++){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    
}
void push(int x){
    node * temp = new node();
    temp->data  = x;
    temp->next = top;
    top = temp;
    // node * temp = new node();
    // temp -> data = x;
    // if(top==NULL){
    //     top = temp;
    //     temp->next = NULL;
    // }
    // node* tmp;
    // temp->next = top;  
    // top = temp;
    // stack.push(x);
    // return;
}
void pop(){
    node *temp;
    if(top==NULL) return;
    temp = top;
    top = top->next;
    delete(temp);
    s.pop();
}
void reverse(){
    if(top==NULL) return;
    node * temp = top;
    while(temp!=NULL){
        s.push(temp);
        temp = temp->next;
    }
    //temp = temp->next;
    temp = s.top();
    top = temp;
    s.pop();
    while(!s.empty()){
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}
int main(){
    //head = NULL;
    push(1);
    push(2);
    push(3);
    pop();
    print();
    reverse();
    print();
}