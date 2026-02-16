/*Binary Tree Maximum Path Sum
A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root.
  
The path sum of a path is the sum of the node's values in the path.
Given the root of a binary tree, return the maximum path sum of any non-empty path.
Input: root = [-10,9,20,null,null,15,7]
Output: 42
Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42.*/

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
    int maxSum(TreeNode* root,int& maxi)
    {
        if(root==NULL) return 0;
        int lsum=max(0,maxSum(root->left,maxi));
        int rsum=max(0,maxSum(root->right,maxi));
        maxi=max(maxi,lsum+rsum+root->val);
        return max(lsum,rsum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxSum(root,maxi);
        return maxi;
    }
};
