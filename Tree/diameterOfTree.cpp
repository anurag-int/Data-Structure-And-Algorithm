class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* root, int &Diameter)
    {
        if(root == NULL)
            return 0;
            
        int lhs = height(root->left, Diameter);
        int rhs = height(root->right, Diameter);
        Diameter = max(Diameter, lhs+rhs);
        return max(lhs, rhs)+1;
    }
    
    
    
    int diameter(Node* root)
    {
        int Diameter = 0;
        height(root, Diameter);
        return Diameter+1;
    }
};