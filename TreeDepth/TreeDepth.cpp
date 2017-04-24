#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL){}
};

class Solution{
public:
	int TreeDepth(TreeNode *root)
	{
		if (root == NULL)
		{
			return 0;
		}
		int left = TreeDepth(root->left);
		int right = TreeDepth(root->right);
		return max(left + 1, right + 1);
	}
};