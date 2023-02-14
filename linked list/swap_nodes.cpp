#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * next;
};

void swapNodes(node **head_ref, int x, int y){
    if(x==y) return;

    node*prevX = NULL, *currX = *head_ref;
    while(currX && currX->data!=x){
        prevX = currX;
        currX = currX->next;
    }
    node*prevY = NULL, *currY = *head_ref;
    while(currY && currY->data!=y){
        prevY = currY;
        currY = currY->next;
    }

    if(currX==NULL|| currY == NULL ) return;
    
    //if x is not a head node
    if(prevX!=NULL) prevX->next = currY;
    else *head_ref = currY;

    //if y is not a head node
    if(prevY!=NULL) prevY->next = currX;
    else *head_ref = currX;

    //swaping of nodes
    node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}

void push(node **head_ref, int val){
    node * temp = new node();
    temp->data = val;
    temp->next = *head_ref;
    *head_ref= temp;
}
void print(node **head_ref){
    node *temp = *head_ref;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node * head = NULL;
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    print(&head);
    swapNodes(&head, 2, 6);
    print(&head);

}