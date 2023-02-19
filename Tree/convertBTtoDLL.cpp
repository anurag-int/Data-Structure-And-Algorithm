class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node* head = NULL;
    Node* prev = NULL;
    
    public:
    Node* ConvertToDLL(Node* root)
    {
        if(root == NULL)    
            return NULL;
        
        // left Call
        ConvertToDLL(root->left);
        
        // processing Root


        // set up head pointer of the linked list to the first Node of the Tree.
        if(prev == NULL)
        {
            head = root;
        }
        else
        {
            root -> left = prev;
            prev -> right = root;
        }
        
        prev = root;
        ConvertToDLL(root->right);
        
    }
    
     
    Node * bToDLL(Node *root)
    {
        ConvertToDLL(root);
        return head;
    }
};