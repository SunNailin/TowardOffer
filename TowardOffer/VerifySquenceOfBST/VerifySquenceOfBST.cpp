#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL){}
};
//����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
//����������Yes, �������No���������������������������ֶ�������ͬ��

//˼·��������������һ��ɶ���������ֽж������������������������
//������һ�ÿ���������
//��������������Ϊ�գ��������������е����ֶ�С�ڸ��ڵ㣬������Ҳ��һ������������
//��������������Ϊ�գ��������������е����ֶ����ڸ��ڵ㣬������Ҳ��һ������������
class Solution{
public:
	bool VerifySquenceOfBST(vector<int> sequence)
	{
		//�����ж���û�и��ڵ�
		bool flag = false;
		//���û�и��ڵ�Ļ�������false
		if (sequence.empty())
			return false;
		//����и��ڵ�Ļ���ȡ�����ڵ�
		int root = sequence.back();
		//���ݸ��ڵ�����зֳ�����������leftV��rightV��
		vector<int> leftV, rightV;
		//ȷ�����������ķֽ��
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
		//�ж������������������С��root��ֵ���򷵻�false�����û�У�������������ֱ�������������

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

