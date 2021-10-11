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
public:
    int getDiameter(TreeNode *root,int &diameter){
        if(!root) return 0;
        int l=getDiameter(root->left,diameter);
        int r=getDiameter(root->right,diameter);
        int maxx=l+r;
        diameter=max(diameter,maxx);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        getDiameter(root,diameter);
        return diameter;
    }
};
