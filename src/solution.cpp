#include"../inc/solution.hpp"


bool Solution::isValidBST(TreeNode* root)
{
    if(!root->left && !root->right){ return true; }  // single node case
    if(!root->left){ return (root->val) < (root->right->val) && isValidBST(root->right); }  // no left subtree
    if(!root->right){ return (root->val) > (root->left->val) && isValidBST(root->left); }  // no right subtree

    return  (root->val) > (root->left->val) && isValidBST(root->left) &&  // recursive calls for the two subtrees
            (root->val) < (root->right->val) && isValidBST(root->right);
}