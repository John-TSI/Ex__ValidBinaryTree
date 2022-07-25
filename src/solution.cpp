#include"../inc/solution.hpp"


bool Solution::validVals(TreeNode* thisNode, TreeNode* minValNode, TreeNode* maxValNode)
{
    if(!thisNode){ return true; }  // handles left and right 'subtrees' of leaf nodes
    if(minValNode && thisNode->val <= minValNode->val){ return false; }
    if(maxValNode && thisNode->val >= maxValNode->val){ return false; }

    // recursive calls: minValNode/maxValNode are updated to current node when checking right/left subtrees, respectively
    return validVals(thisNode->left, minValNode, thisNode) && validVals(thisNode->right, thisNode, maxValNode);
}

bool Solution::isValidBST(TreeNode* root)
{
    return validVals(root,nullptr,nullptr);  // root node has no constraints on its value
}