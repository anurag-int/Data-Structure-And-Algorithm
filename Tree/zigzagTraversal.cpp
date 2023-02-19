// aproach --> check if the leftToRight happen or rightToLeft happen by the help of bool variables
// if we have done right to left travseral than after travesal update right to left bool variable make as true;
// or we have done left to right traversal than after traversal upadate left to right bool varible make as true;



class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        queue<TreeNode *> q;
        q.push(root);

        bool leftToRight = true;
        bool rightToLeft = false;
        
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level;
            

            if (leftToRight == true)
            {
                for (int i = 0; i < size; i++)
                {

                    TreeNode *node = q.front();
                    q.pop();

                    if (node->left)
                        q.push(node->left);
                    if (node->right)
                        q.push(node->right);

                    level.push_back(node->val);
                }

                rightToLeft = true;
                leftToRight = false;
            }

            else
            {
                for (int i = 0; i < size; i++)
                {
                    TreeNode *node = q.front();
                    q.pop();
                    if (node->left)
                        q.push(node->left);
                    if (node->right)
                        q.push(node->right);
                    level.push_back(node->val);
                }
                    rightToLeft = false;
                    leftToRight = true;
            }

            if (leftToRight == true)
            {
                reverse(level.begin(), level.end());
                
                ans.push_back(level);
            }

            else
            {
                
                ans.push_back(level);
            }
        }

        return ans;
    }
 };
