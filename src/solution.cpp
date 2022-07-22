#include"../inc/solution.hpp"


bool Solution::minMaxTracker(TreeNode* thisNode, TreeNode* minNode, TreeNode* maxNode)
{
    if(minNode && thisNode->val <= minNode->val){ return false; }  // verify thisNode->val is valid before checking if it's a leaf
    if(maxNode && thisNode->val >= maxNode->val){ return false; }
    if(!thisNode->left && !thisNode->right){ return true; }  // single node / leaf node case

    minNode = thisNode; maxNode = thisNode;  // current node sets limits for its subtrees
    if(!thisNode->left){ return minMaxTracker(thisNode->right, minNode, nullptr); }  // no left subtree
    if(!thisNode->right){ return minMaxTracker(thisNode->left, nullptr, maxNode); }  // no right subtree

    return minMaxTracker(thisNode->left, nullptr, maxNode) && 
            minMaxTracker(thisNode->right, minNode, nullptr);  // recursive calls for the two subtrees
}

bool Solution::isValidBST(TreeNode* root)
{
    return minMaxTracker(root,nullptr,nullptr);
}