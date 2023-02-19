#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter Data to insert in the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter Data to insert in the right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Creating a Tree

    root = buildTree(root);
    cout << "Level Order Traversal : " ;
    levelOrderTraversal(root);
    cout << endl;
    cout << "Pre Order Traversal : " ;
    preorderTraversal(root);
    cout << endl;
    cout << "In Order Traversal : " ;
    inorderTraversal(root);
    cout << endl;
    cout << "Post Order Traversal : " ;
    postOrderTraversal(root);
    return 0;
}