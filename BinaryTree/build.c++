#include<iostream>
using namespace std;

class node{
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

// recursive way to build a binary tree
node* buildTree(node* root){
    cout<<"Enter a data:"<<endl;
    int data;
    cin>>data;
    if(data == -1 )
        return NULL;

    root = new node(data);
    cout<<"Enter left node of " <<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter right node of "<<data<<endl;
    root->right = buildTree(root->right);


}
int main(){
    node* root = NULL;
    buildTree(root);
    //build tree
    // node* root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);

    return 0;
}