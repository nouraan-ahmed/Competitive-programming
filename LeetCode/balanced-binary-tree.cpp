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

 
int calc_height_tree(TreeNode* node) {
    int ll=0;
    int rr=0;
    int maximum = 0;
    //base case
    if (!node) {
        return 0;
    }
 
        //recursive call
    else {
        ll=calc_height_tree(node->left) ;
        rr=calc_height_tree(node->right);
        if (ll > rr) {
            maximum = ll;
        }
        else if (ll <= rr) {
            maximum = rr;
        }
        return 1 + maximum;
    }
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
            int ll=0;
    int rr=0;
    //base case
    if (!root) {
        return 1;
    }
    ll=calc_height_tree(root->left) ;
    rr=calc_height_tree(root->right);
    //recursive call
    if (abs(ll - rr) <= 1) {
        if (isBalanced(root->left) && isBalanced(root->right)) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
    }
};
