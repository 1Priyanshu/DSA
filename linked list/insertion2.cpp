//Inserting a node at nth position

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head;
void insert(int data, int n){
    node *temp1 = new node();
        temp1-> data = data;
        temp1 -> next = NULL;
    if(n==1){
        temp1 ->next = head;  //This case means the new node will come at the position n=1, so we have to 
        head = temp1;  // point the 'next' part if that new node to the current 1st element of the list,
        return;   // ie temp1->next = head;
    }
    node *temp2 = head;
    for(int i=0; i<n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void print(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp  = temp->next;
    }
    cout<<endl;
}
int main(){
head = NULL; // empty list
insert(3,1);
insert(2,2);
insert(4,1);
insert(5,2);
print();
}