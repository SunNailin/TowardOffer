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
	//判断B树是不是A树的子结构
	//思路：
	//1.首先判断B的根结点是不是A的某个结点
	//2.如果B的根结点是A的某个结点，那么判断B的左右子结点是否是A的该结点的左右子结点
	//3.如果是，则继续判断B的子结点的子结点是否A的子结点的子结点
	//4.递归调用对
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