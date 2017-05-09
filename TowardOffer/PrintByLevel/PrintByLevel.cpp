#include <iostream>
#include <vector>
#include <queue>

using namespace std;



struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
	//二叉树的层次遍历，利用队列实现
	//
	vector<vector<int> > Print(TreeNode* pRoot) {
		vector<vector<int> > res;
		queue<TreeNode*> q;
		if (pRoot == NULL)
		{
			return res;
		}

		q.push(pRoot);
		int index = 1;
		while (!q.empty())
		{
			int left = 0, right = q.size();
			vector<int> temp;
			while (left++ < right)
			{
				TreeNode* t = q.front();
				temp.push_back(t->val);
				q.pop();
				if (t->left) q.push(t->left);
				if (t->right) q.push(t->right);
			}
			res.push_back(temp);
		}
		return res;
	}

};