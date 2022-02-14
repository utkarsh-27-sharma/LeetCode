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
int maxDepth(TreeNode* root) {
        if(root == NULL) // As here no node is present so return 0
			return 0;
			
        int left = maxDepth(root->left);   // count the maximum level of the left sub tree
        int right = maxDepth(root->right); // count the maximum level of the right sub tree
			
		return max(left, right) + 1;      // Find the maximum level out  of left sub tree and right subtree, add 1 of the current level
    }};