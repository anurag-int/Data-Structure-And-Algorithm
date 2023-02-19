#include<iostream>
#include<queue>>
using namespace std;

class Node
{
    // charcterictics of Node
    public:
    int data;
    Node* right;
    Node* left;


    //constructor
    Node(int d)
    {
        this -> data = d;
        this -> right = NULL;
        this -> left = NULL;
    }


    Node* buildTree(Node* root)
    {
        cout << "Enter the data: "<< endl;
        int data;
        cin >> data;
        root = new Node(data);
        if(data == -1)
        {
            return NULL;
        }

        cout << "Enter data for inserting in left of " << data << endl;
        root -> left = buildTree(root->left);
        cout << "Enter data for inserting in right of " << data << endl;
        root -> right = buildTree(root->right);
        return root;
    }

    void levelOrderTraversal(Node* root)
    {
        queue<Node*> q;
        q.push(root);
        q.pop();
        while(!q.empty())
        {
            q.push(root->left);
        }

    }

};

int main()
{
    Node* root = NULL;
    root = buildTree(root);
}