/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int s = INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return s;
    }
private:
    int dfs(TreeNode* root){
        if(!root) return 0;
        int l = max(0,dfs(root->left));
        int r = max(0,dfs(root->right));

        int curr = root->val + l + r;
        s = max(s,curr);

        return root->val + max(l,r);
    }
};