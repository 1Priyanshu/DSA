// reversing linked list using recursion.
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node *head;
void print(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp  = temp->next;
    }
    cout<<endl;
}
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
void reverse(node *p){
    if(p->next==NULL){  // Exit condition.
        head = p;
        return;
    }
    reverse(p->next);
    node *q  = p->next;  // make a node to specify the last element and then reverse.
    q->next = p;   // then reverse the node curently in recursion.
    p->next = NULL;  // make the node in recursion to NULL.
    // here its not like that we are fixing NULL and then linking to any other...
    //its for every recursive call creating a new 'q'. so creating a link and linking the 
    // node in recursion to NULL, so that finaly the first node goes to NULL.
}
int main(){
head = NULL;
insert(1);
insert(3);
insert(5);
insert(7);
print();
reverse(head);
print();

}