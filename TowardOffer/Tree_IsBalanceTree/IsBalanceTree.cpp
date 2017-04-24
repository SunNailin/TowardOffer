//给定一个二叉树，判断该二叉树是否平衡二叉树
//1.如果是一个空树，那么是平衡二叉树
//2.它的左右两个子树的高度差的绝对值不超过1，并且左右两个子树都是一棵平衡二叉树

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL){}
};

class Solution{
public :
	int TreeDepth(TreeNode *root)
	{
		if (root == NULL)
			return 0;
		int left = TreeDepth(root->left);
		int right = TreeDepth(root->right);
		return max(left + 1, right + 1);
	}

	bool isBalanceTree(TreeNode *root)
	{
		if (root == NULL)
			return true;
		if (abs(TreeDepth(root->left) - TreeDepth(root->right)) <= 1)
			return isBalanceTree;
		else return false;
	}

	
};