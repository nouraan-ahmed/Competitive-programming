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
  public: TreeNode * sort(vector < int > & nums, int l, int r) {
    int mid;
    if (l > r) {
      return NULL;
    }
    mid = (l + r) / 2;
    TreeNode * root = new TreeNode(nums[mid]);
    root -> left = sort(nums, l, mid - 1);
    root -> right = sort(nums, mid + 1, r);
    return root;
  }
  TreeNode * sortedArrayToBST(vector < int > & nums) {
    return sort(nums, 0, nums.size() - 1);
  }
};
