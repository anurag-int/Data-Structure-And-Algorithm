#include<iostream>
#include<queue>

using namespace std;

class Node
{   
    public: 
    int data;
    Node* left;
    Node* right;

    // constructor

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void insertIntoBst(Node* root, int data)
{
    if(root == NULL)
    {
        root = new Node(data);
    }

    if(data > root -> data)
    {
        root -> left = insertIntoBst(root -> left, data);
    }

    else
    {
        root -> left = insertIntoBst(root -> right, data);
    }

    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin >> data;

    while(data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

int main()
{
    Node* root = NULL;

    cout << "Enter the data for the BST"
    takeInput(root);
}