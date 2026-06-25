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
     int height(TreeNode* root){
         if(root==NULL) return 0;
         int lefth=height(root->left);
         int rightd=height(root->right);
         return max(lefth,rightd)+1;
     }
     
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;

        int leftd=diameterOfBinaryTree(root->left);
        int rightd=diameterOfBinaryTree(root->right);
        int currd=height(root->left)+height(root->right);
        return max(leftd,max(rightd,currd));
    }
};