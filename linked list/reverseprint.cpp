//printing a reversed linked list using recursion.

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void reverseprint(node *p){
    if(p==NULL) {
        cout<<endl;
         return;
    }
    reverseprint(p->next);
    cout<<p->data<<" ";
}
node* insert(node* head, int data){
    node * temp = new node();
    temp->data = data;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
        return head;
    }
    node *temp1 = head;
    while(temp1->next!=NULL){
        temp1 = temp1->next;
    }
        temp1->next = temp;
    return head;
}
void print(node *head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    node*head= NULL;
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5); // here the value of head will remain same but still
    head = insert(head, 6);// on passing print(head) below & above will give diff.
    print(head);  // results bcoz we are inserting elements(creating ll) via head, not changing
    reverseprint(head);// the value of head.
    return 0;
}