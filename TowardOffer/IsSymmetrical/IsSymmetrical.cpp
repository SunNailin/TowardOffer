#include <iostream>

using namespace std;

//��ʵ��һ�������������ж�һ�Ŷ������ǲ��ǶԳƵġ�
//ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};
//˼·���������������������ͬ�����������������������������
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