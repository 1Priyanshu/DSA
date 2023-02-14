//doubly linked list implementation.

#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *prev;
    node*next;
};
node *head;
node* getnewNode(int x){
    node *Newnode = new node();  // is creating newnode here with node*newnode;
    Newnode->data = x;  // then it would create it stack and then gets clear
    Newnode->next = NULL;// as soon as function exits, so we will create newnode in heap.
    Newnode->prev = NULL; // by node * newnode = new node();
    return Newnode;
}

void Insertathead(int x){
    node * newNode = getnewNode(x);
    if(head==NULL){
    head = newNode;
    return;
    }
    // head->next = newNode;
    // newNode->prev = head;
    //head = newNode;
    //or
    
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
    
}
void print(){
    node * temp = head;
    cout<<"Forward: ";
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void reverseprint(){
    node *tmp = head;
    if(head == NULL){ //empty list, exit
        return;
    }
    //going to last node.
    while(tmp->next!=NULL){
        tmp = tmp->next;
    }
    //traversing backward using prev pointer
    cout<<"Reverse: ";
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}


int main(){
head = NULL; // empty list.
Insertathead(1); print(); reverseprint();
Insertathead(2);print(); reverseprint();
Insertathead(3);print(); reverseprint();
Insertathead(4);print(); reverseprint();
return 0;
}