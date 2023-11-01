/*                      Sum Tree
statement:

*/

#include <bits/stdc++.h>
using namespace std;
struct node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    // cout << "enter data:" << endl;
    cin >> data;
    if (data == -1)
        return NULL;
    root = new node(data);
    // cout << "Enter left node of " << data << endl;
    root->left = buildTree(root->left);
    // cout << "Enter right node of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
                q.push(temp->right);
        }
    }
}
node *lca(node *root, int n1, int n2)
{
    // base case
    if (root == NULL)
        return NULL;
    if (root->data == n1 and root->data == n2)
        return root;

    // recusive traversal of left subtree
    node *leftAns = lca(root->left, n1, n2);
    node *rightAns = lca(root->right, n1, n2);

    // if both are not null
    if (leftAns and rightAns)
        return root;
    else if (leftAns and !rightAns) // if leftAns is null and right is not null
        return leftAns;
    else if (!leftAns and rightAns) // is right is null but left is not null
        return rightAns;
    else // if noth are null
        return NULL;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    node *root = NULL;
    // 1 2 4 -1 -1 5 -1 -1 3 7 6 -1 -1 -1 8 -1 -1
    /*        1
           2    3
         4  5  7  8
              6
    */
    root = buildTree(root);

    // cout << "printing tree...." << endl;
    // levelOderTraversal(root);
    // cout << "Enter n1 and n2";

    cout << "lca is: ";
    cout << lca(root, n1, n2)->data << endl;
    return 0;
}