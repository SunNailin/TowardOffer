#include <iostream>

using namespace std;

//请实现一个函数，用来判断一颗二叉树是不是对称的。
//注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};
//思路：如果根结点的左右子数相同，并且左子树的左等于右子树的右
class Solution {
public:
	bool isEqual(TreeNode* pLeft, TreeNode* pRight)
	{
		if (pLeft == NULL && pRight == NULL)
			return true;
		else if (pLeft != NULL && pRight != NULL)
			return pLeft->val == pRight->val && isEqual(pLeft->left, pRight->right) && isEqual(pLeft->right, pRight->left);
		else
			return false;
	}

	bool isSymmetrical(TreeNode* pRoot)
	{
		if (pRoot == NULL)
			return true;
		else return isEqual(pRoot->left, pRoot->right);

	}

};