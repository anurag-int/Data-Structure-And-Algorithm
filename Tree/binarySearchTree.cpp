#include<iostream>
#include<queue>
using namespace std;


    class Node
    {
        // Node characteristics
        public:
        int data;
        Node* right;
        Node* left;

        //constructor
        Node(int d)
        {
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
    };

    Node* insertIntoBST(Node* &root, int d)
    {
        //base Case
        if(root == NULL)
        {
            root = new Node(d);
            return root;
        }
        
        if(root -> data < d)
        {
            root -> right = insertIntoBST(root -> right, d);
        }

        else
        {
            root -> left = insertIntoBST(root -> left,d);
        }

        return root;

    }

    void takeInput(Node* &root)
    {
        int data;
        cin >> data;

        while(data != -1)
        {
            insertIntoBST(root, data);
            cin >> data;
        }
    }

    void levelOrderTraversal(Node* root)
    {
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();

            if(temp == NULL)
            {
                cout << endl;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                cout << temp -> data << " ";
                if(temp -> left)
                {
                    q.push(temp -> left);
                }

                if(temp -> right)
                {
                    q.push(temp -> right);
                }
            }
        }

    }

    int main()
    {
        Node* root = NULL;
        cout << "Enter data to create BST" << endl;
        takeInput(root);
        levelOrderTraversal(root);
        return 0;
    }


