#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

void insert(node **head_ref, int val){
    node *temp = new node();
    temp->data = val;
    temp->next = *head_ref;
    *head_ref = temp;
}
void print(node **head_ref){
    node*temp = *head_ref;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void sort(node **head_ref){
    node *temp = *head_ref;
    while(temp->next!=NULL){
        node *tmp = temp->next;
        while(tmp!=NULL){
            if(temp->data>tmp->data){
               int valtemp = temp->data;
               temp->data = tmp->data;
               tmp->data = valtemp;
            }
            tmp=tmp->next;
        }
        temp=temp->next;
    }
}
int main(){
    node* head = NULL;
    insert(&head, 2);
    insert(&head, 1);
    insert(&head, 6);
    insert(&head, 9);
    print(&head);
    sort(&head);
    print(&head);

}