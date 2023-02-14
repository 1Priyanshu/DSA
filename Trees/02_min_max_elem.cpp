#include<bits/stdc++.h>
using namespace std;

class BstNode{
    public:
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode * getNewNode(int data){
    BstNode * temp = new BstNode();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void insert(BstNode **root, int data){
    if(*root==NULL) {
        *root = getNewNode(data);
    }
    else if(data<=(*root)->data){
        return insert((&(*root)->left), data);
    }
    else  return insert((&(*root)->right), data);
}

int FindMin(BstNode *root){
    if(root==NULL){
        cout<<"Error: tree is empty"<<endl;
        return -1;
    }
    else if(root->left!=NULL){
        root = root->left;
        return FindMin(root);
    }
    return root->data;
}

int FindMax(BstNode *root){
    if(root==NULL){
        cout<<"Error: tree is empty"<<endl;
        return -1;
    }
    else if(root->right!=NULL){
        root = root->right;
        return FindMax(root);
    }
    return root->data;
}

int main(){
    BstNode * root = NULL;
    insert(&root, 10);
    insert(&root, 9);
    insert(&root, 11);
    insert(&root, 8);
    insert(&root, 7);
    insert(&root, 15);
    cout<<"Min element of tree is: "<<FindMin(root)<<endl;
    cout<<"Max element of tree is: "<<FindMax(root)<<endl;
return 0;
}