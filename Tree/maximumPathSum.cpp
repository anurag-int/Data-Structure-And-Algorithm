int max_sum(Node* root, int &maxi)
    {
        if(root == NULL)
            return 0;
            
        int leftSum = max(0, max_sum(root->left, maxi));
        int rightSum = max(0, max_sum(root->right, maxi));
        maxi = max(maxi, root->data + leftSum + rightSum);
        return root->data + max(leftSum,rightSum);
        
    }
    int findMaxSum(Node* root)
    {
        int maxi = INT_MIN;
        max_sum(root, maxi);
        return maxi;
    }