#include<bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<<"enter data:"<<endl;
    cin>>data;
    if(data ==-1)
        return NULL;
    root = new node(data);
    cout<<"Enter left node of "<<data<<endl;
    buildTree(root->left);
    cout<<"Enter right node of "<<data<<endl;
    buildTree(root->right);
    return root;
}

// Inorder Traversal of Binary Tree
void inOrder(node* root){
    if(root==NULL)
        return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){

    node* root = NULL;
    //1 2 4 -1 -1 5 -1 -1 3 7 6 -1 -1 -1 8 -1 -1 
    root = buildTree(root);
    inOrder(root);
    
    return 0;
}