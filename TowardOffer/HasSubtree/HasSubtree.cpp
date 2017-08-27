#include <iostream>

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
	//�ж�B���ǲ���A�����ӽṹ
	//˼·��
	//1.�����ж�B�ĸ�����ǲ���A��ĳ�����
	//2.���B�ĸ������A��ĳ����㣬��ô�ж�B�������ӽ���Ƿ���A�ĸý��������ӽ��
	//3.����ǣ�������ж�B���ӽ����ӽ���Ƿ�A���ӽ����ӽ��
	//4.�ݹ���ö�
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 == NULL && pRoot2 == NULL)
			return true;
		if (pRoot1 == NULL && pRoot2 != NULL || pRoot1 != NULL && pRoot2 == NULL)
			return false;
		if (pRoot1->val == pRoot2->val)
		{
			if (HasSubtree(pRoot1->left, pRoot2->right) && HasSubtree(pRoot1->right, pRoot2->right))
				return true;
		}
		else return false;
	}
};

int main(){
	getchar();
}