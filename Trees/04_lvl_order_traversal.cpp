#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node * left;
    node * right;
};

node* getnewNode(char c){
    node * temp = new node();
    temp->data = c;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insert(node **root, char c){
    if(*root==NULL){
        *root = getnewNode(c);
    }
    else if(c<(*root)->data){
       return insert( &(*root)->left, c);
    }
    else{
       return insert(&(*root)->right, c);
    }
}

void levelOrder(node *root){
    if(root==NULL) return;

    queue <node *> q;
    q.push(root);

    //while there is atleast one discovered node.
    while(!q.empty()){
        node * current = q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL) q.push(current->left); 
        if(current->right!=NULL) q.push(current->right);
        q.pop(); //removing the element at front 
    }

}

int main(){
    node *root = NULL;
    char F,D,J,B,E,G,K,A,C,H,I;
    insert(&root, F);
    insert(&root, D);
    insert(&root, J);
    insert(&root, B);
    insert(&root, E);
    insert(&root, G);
    insert(&root, K);
    insert(&root, A);
    insert(&root, C);
    insert(&root, I);
    insert(&root, H);
    levelOrder(root);

}