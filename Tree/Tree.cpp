#include<iostream>
#include<queue>
using namespace std;


class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int n)
    {
        this->data = n;
        this->left = NULL;
        this->right = NULL;
    }
};

    Node* BuildTree(Node* root)
    {
        cout << "Enter the data: " << endl;
        int data;
        cin >> data;
        
        Node* new_node = new Node(data);
        root = new_node;

        if(data == -1)
            return NULL;

        cout << "Enter the data in the left of " << root -> data << endl;
        root->left = BuildTree(root->left);

        cout << "Enter the data in the right of " << root -> data << endl;
        root->right = BuildTree(root->right);

        return root;
    }

    void LevelOrderTraversal(Node* root)
    {
        
        if(root == NULL)
            cout << "Sorry The Tree is Empty !" << endl;
        
        queue<Node*>q;
        q.push(root);

        while(!q.empty())
        {
            Node* temp_node = q.front();
            q.pop();

            cout << temp_node->data << " ";
            if(temp_node -> left)
                q.push(temp_node->left);
            if(temp_node -> right)
                q.push(temp_node->right);
        }

    }

int main()
{
    Node* root = NULL;

    // temp  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = BuildTree(root);

    LevelOrderTraversal(root);
    return 0;
}