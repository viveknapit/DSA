#include<iostream>
#include<queue>
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
    return root;
}
// build binary tree from lavel order
void buildTreeByLavelOrder(node* &root){
    int rootData;
    cout<<"Enter data for root"<<endl;
    cin>>rootData;
    root= new node(rootData);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
            int leftNode;
            cout<<"Enter data for left node of "<< temp->data <<endl;
            cin>>leftNode;
            if(leftNode != -1){
            temp->left = new node(leftNode);
            q.push(temp->left);
            }
        
        
            int rightNode;
            cout<<"Enter data for right node of "<<temp->data<<endl;
            cin>>rightNode;
            if(rightNode != -1){
            temp->right = new node(rightNode);
            q.push(temp->right);
            }
    }
}
// level order traversing of a binary tree
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
int main(){
    node* root = NULL;
    
  //  buildTree(root);
      buildTreeByLavelOrder(root);

    cout<<"printing........."<<endl;
    levelOderTraversal(root);
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