// calculate height of binary tree

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        this->data = val;
        this->left = NULL;
        this->right= NULL;
    }
};

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
    return root;
}
void levelOderTraversal(node* root){
    
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right)
                q.push(temp->right);
        }
    }

}
int height(node* root){
    // base case
    if(root==NULL)
        return 0;
    
    int left = height(root->left);
    int right = height(root->right);

    return max(left, right)+1;
}
int main(){
    node* root =  NULL;
    root = buildTree(root);
    cout<<"height of the tree is "<<height(root)<<endl;
    return 0;
}