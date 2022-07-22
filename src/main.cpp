// https://leetcode.com/problems/validate-binary-search-tree/

#include<iostream>
#include"../inc/solution.hpp"


int main()
{
	TreeNode n7(7);
	TreeNode n6(5);
	TreeNode n5(3);
	TreeNode n4(1);
	TreeNode n3(6,&n6,&n7);
	TreeNode n2(2,&n4,&n5);
	TreeNode root(4,&n2,&n3);  // true

	TreeNode m7(7);
	TreeNode m6(5);
	TreeNode m5(3);
	TreeNode m4(8);  // 8<2
	TreeNode m3(6,&m6,&m7);
	TreeNode m2(2,&m4,&m5);
	TreeNode root2(4,&m2,&m3);  // false

	Solution sol;
	std::cout << sol.isValidBST(&root);
	std::cout << sol.isValidBST(&root2);
	return 0;
}

