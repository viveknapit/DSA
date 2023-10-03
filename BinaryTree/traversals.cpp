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
    root->left =  buildTree(root->left);
    cout<<"Enter right node of "<<data<<endl;
    root->right = buildTree(root->right);
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
void preOrder(node* root){
    // base case 
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root){
    //base case
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}
int main(){

    node* root = NULL;
    //1 2 4 -1 -1 5 -1 -1 3 7 6 -1 -1 -1 8 -1 -1 
    root = buildTree(root);
    cout<<"inorder Printing....."<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"preOrder printing...."<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"printing... post order"<<endl;
    postOrder(root);
    return 0;
}