#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};
node* getnewnode(int val){
    node * temp = new node();
    temp ->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insert(node **root, int data){
    if(*root==NULL){
        *root = getnewnode(data);
    }
    else if(data<=(*root)->data){
        return insert(&(*root)->left, data);
    }
    else{
        return insert(&(*root)->right, data);
    }
}

void preorder(node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node *root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node * root = NULL;
    insert(&root, 10);
    insert(&root, 5);
    insert(&root, 15);
    insert(&root, 8);
    insert(&root, 4);
    insert(&root, 11);
    insert(&root, 17);
    preorder(root);
    return 0;
}