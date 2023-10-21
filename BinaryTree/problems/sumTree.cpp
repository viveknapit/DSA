/*                      Sum Tree
statement: Given a binary tree, return true if for every node x is the tree other than leaves its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false

*/

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
//aproach :- using recursion
// function to check for sum tree
pair<bool, int>solve(struct node* root){
    // base case
    if(!root){
        return {true, 0};
    }
    pair<bool,int>left = solve(root->left);
    pair<bool, int>right = solve(root->right);
    if(left.second==0 && right.second==0 and left.first && right.first)
        return  {true, 0};
    int sum = left.second+right.second;
    if(sum == root->data){
        return {true, sum + root->data};
    }else{
        return {false, sum};
    }
}
bool sumTree(struct node* root){
    pair<bool , int>ans = solve(root);
    return ans.first;
}
int main(){
    node* root = NULL;
    //1 2 4 -1 -1 5 -1 -1 3 7 6 -1 -1 -1 8 -1 -1 
    root = buildTree(root);
    cout<<"inorder Printing....."<<endl;
    levelOderTraversal(root);
    cout<<endl;
    if(sumTree(root))
        cout<<"True";
    else
        cout<<"false\n";
    return 0;
}