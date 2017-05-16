#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL){}
};
//输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
//如果是则输出Yes, 否则输出No。假设输入的数组的任意两个数字都互不相同。

//思路：二叉搜索树是一个啥样的树（又叫二叉查找树、二叉排序树）？
//或者是一棵空树，或者
//若它的左子树不为空，则左子树上所有的数字都小于根节点，左子树也是一个二叉搜索树
//若它的右子树不为空，则右子树上所有的数字都大于根节点，右子树也是一个二叉搜索树
class Solution{
public:
	bool VerifySquenceOfBST(vector<int> sequence)
	{
		//首先判断有没有根节点
		bool flag = false;
		//如果没有根节点的话，返回false
		if (sequence.empty())
			return false;
		//如果有根节点的话，取出根节点
		int root = sequence.back();
		//根据根节点把序列分成两个子树，leftV和rightV；
		vector<int> leftV, rightV;
		//确定左右子树的分界点
		int index = 0;
		for (int i = 0; i < sequence.size() - 1; i++)
		{
			if (sequence[i] > root)
			{
				index = i - 1;
				break;
			}
			else
			{
				index = i;
			}
		}
		//判断右子树，如果其中有小于root的值，则返回false，如果没有，则把左右子树分别存进两个数组中

		for (int j = index + 1; j < sequence.size() - 1; j++)
		{
			if (sequence[j] < root)
			{
				return false;
			}
		}
		for (int count = 0; count < index; count++)
		{
			leftV.push_back(sequence[count]);
		}
		for (int count = index + 1; count < sequence.size() - 1; count++)
		{
			rightV.push_back(sequence[count]);
		}
		flag = true;
		bool leftFlag = true;
		bool rightFlag = true;
		if (!leftV.empty())
		{
			leftFlag = VerifySquenceOfBST(leftV);
		}

		if (!rightV.empty())
		{
			rightFlag = VerifySquenceOfBST(rightV);
		}
		return (flag && leftFlag && rightFlag);
	}
};

