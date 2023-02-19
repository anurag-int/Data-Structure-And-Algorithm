// logic 
// add the root -> data firstly
// step i -------> 
// 1. firstly go left side of the left subtree;  till before leafNode (without including the root data).
// 2. secondly go and collect the data from leafNode.  from the inorder traversal
// 3. thirdly go right subtree and collect the data from right subtree till leaf and 
//    without including the root and just reverse it.



class Solution {
public:
    // traversing lefttree
    void traversalLeft(Node* root, vector<int> &ans)
    {
        if( (root==NULL) || (root->left==NULL && root->right==NULL) )
            return;
        ans.push_back(root->data);
        if(root->left)
            traversalLeft(root->left, ans);
        else
            traversalLeft(root->right, ans);
    }
    
    void traversalLeaf(Node* root, vector<int> &ans)
    {
        if(root==NULL)
            return;
        if(root->left == NULL && root->right==NULL)
            ans.push_back(root->data);
        
        traversalLeaf(root->left, ans);
        traversalLeaf(root->right, ans);
    }
    
    void traversalRight(Node* root, vector<int> &ans)
    {
        if( (root==NULL) || (root->left==NULL && root->right==NULL) )
        {
            return;
        }
        if(root->right)
            traversalRight(root->right, ans);
        else
            traversalRight(root->left, ans);
            
        ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        ans.push_back(root->data);
        
        // traversing Left tree
        traversalLeft(root->left, ans);
        
        // traversing Leaf Node from left subtree
        traversalLeaf(root->left, ans);
        
        // traversing Leaf Node from right subtree
        traversalLeaf(root->right, ans);
        
        // traversing Right tree
        traversalRight(root->right, ans);
        
        return ans;
        
    }
};