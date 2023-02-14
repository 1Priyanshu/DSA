#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node * front = NULL;
Node * rear = NULL;

void EnQueue(int x){
    Node * temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(front==NULL && rear==NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void DeQueue(){
    Node * temp = front;
    if(front==NULL && rear==NULL) return ;
    if(front ==rear){
        front = rear = NULL;
    }
    front = front->next;
    delete(temp);
}

void print(){
    Node *temp = front;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

int main(){
EnQueue(1);
EnQueue(2);
EnQueue(3);
print();
DeQueue();
print();
    
}