#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *link;
};
node * top = NULL;

void push(int x){
    node * temp = new node();
    temp -> data = x;
    temp -> link = top;
    top = temp;
}
void pop(){
    node * temp;
    if(top==NULL) return;
    temp = top;
    top =top->link;
    delete(temp);
}
void printll(){
    node *temp;
    temp = top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}

int main(){
    push(1);
    push(2);
    printll();
    pop();
    printll();
    push(3);
    push(4);
    push(5);
    printll();
}
