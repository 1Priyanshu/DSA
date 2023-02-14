// reversing a linked list using iteration.

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next;
}; 
node*head;
void insert(int n){
    node *temp1  =new node();
    temp1-> data = n;
    temp1 -> next = NULL;
    if(head == NULL){
        head  =temp1;
        return;
    }
    node *temp2 = head;
    while(temp2->next!=NULL){
        temp2  =temp2->next;
    }
    temp2->next = temp1;
}
void print(){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void reverse(){
    node *current, *prev, *next;
    prev = NULL;
    current = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main(){
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(6);
    insert(9);
    print();
    reverse();
    print();
return 0;
}