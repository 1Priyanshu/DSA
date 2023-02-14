// Inserting a node in the beginning.
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
node *head;  // global variable can be accessed anywhere.

void print(){
    node *temp1 = head;  // The node* temp will form a pointer var which is
    //initially eq to head pointer.
    //for eg.. *temp = '100' this address. which is the address of the first element
    //in the list. 
    //when we traverse, we write temp = temp->next , that means
    // now the temp pointer variable is storing the address of the second element.
    // let temp->next  = '200'
    // so *temp  = '200'
    cout<<"List is: ";
    while( temp1 != NULL){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    cout<<"\n";
}
void insert(int x){
node *temp = new node();
temp -> data = x;
temp -> next = head;
head = temp;
}

int main(){
    head = NULL;
    cout<< "Enter the length of list: ";
    int n,x;
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"Enter the numbers:\n";
        cin>>x;
        insert(x);
        print();
    }
}