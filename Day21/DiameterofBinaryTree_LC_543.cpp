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
    int height(TreeNode* root){
        if(root==nullptr)return 0;
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        return 1+max(leftheight,rightheight);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;

        int l=height(root->left);
        int r=height(root->right);

        int option1= l+r;
        int option2 = diameterOfBinaryTree(root->left);
        int option3 = diameterOfBinaryTree(root->right);

        return max(option1,max(option2,option3));
    }
};