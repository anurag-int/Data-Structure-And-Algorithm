vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp->right)
            q.push(temp->right);
        if(temp->left)
            q.push(temp->left);
        ans.push_back(temp->data);
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}