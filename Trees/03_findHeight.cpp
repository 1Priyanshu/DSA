#include<bits/stdc++.h>
using namespace std;


struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* getnewNode(int data){
    BstNode* temp = new BstNode();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void insert(BstNode **root, int data){
    if(*root==NULL){
        *root = getnewNode(data);
    }
    else if(data<(*root)->data){
        return insert(&(*root)->left, data);
    }
    else return insert(&(*root)->right, data);
}
void levelOrder(BstNode *root){
    if(root==NULL) return;

    queue <BstNode *> q;
    q.push(root);

    //while there is atleast one discovered node.
    while(!q.empty()){
        BstNode * current = q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL) q.push(current->left); 
        if(current->right!=NULL) q.push(current->right);
        q.pop(); //removing the element at front 
    }

}

int FindHeight(BstNode **root){
    if(*root==NULL) return -1;
    return max(FindHeight(&(*root)->left), FindHeight(&(*root)->right)) + 1;
}

int main(){
    BstNode *root = NULL;
    insert(&root, 10);
    insert(&root, 5);
    insert(&root, 15);
    insert(&root, 8);
    insert(&root, 4);
    insert(&root, 11);
    insert(&root, 17);
    levelOrder(root);
   // cout<<FindHeight(&root)<<endl;
    return 0;
}