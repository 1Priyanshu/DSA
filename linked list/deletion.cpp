// deleting an element from a linked list.

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
};
node *head;
void insert(int n){   // insertion of node in the end.
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
void deleteAtposition(int n){
    node *temp = head;
    if(n==1){
        head = temp -> next;
        delete(temp); // free = delete in cpp
        return;
    }
    for(int i=0; i<n-2; i++){
        temp = temp->next;   // temp points to (n-1)th node.
    }
    node *temp1  = temp -> next;  //nth node
        temp -> next = temp1 -> next;  //(n+1)th node
        delete(temp1);
}
void print(){
    node * temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
head = NULL;
insert(2);
insert(4);
insert(6);
insert(7);
print();
int x;
cout<<"Enter the position: ";
cin>>x;
deleteAtposition(x);
print();
return 0;
}