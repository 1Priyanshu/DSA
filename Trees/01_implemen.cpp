#include<bits/stdc++.h>
using namespace std;

class BstNode{
    public:
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* getNewNode(int data){
    BstNode* temp = new BstNode();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

BstNode* insert(BstNode* root, int data){
    if(root==NULL){
        root = getNewNode(data);
    }
    else if(data<=root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}
bool search(BstNode*root, int data){
    if(root==NULL) return false;
    if(data == root->data) return true;
    else if(data<root->data){
        return search(root->left, data);
    }
    else{
        return search(root->right, data);
    }
}

int main(){
    BstNode *root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 17);
    root = insert(root, 25);
    int num;
    cout<<"Enter the number to be searched: ";
    cin>>num;
    if(search(root, num)) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}