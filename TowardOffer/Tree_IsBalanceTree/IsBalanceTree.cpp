//����һ�����������жϸö������Ƿ�ƽ�������
//1.�����һ����������ô��ƽ�������
//2.�����������������ĸ߶Ȳ�ľ���ֵ������1����������������������һ��ƽ�������

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