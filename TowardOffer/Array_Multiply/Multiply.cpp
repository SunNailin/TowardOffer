//����һ������A[0, 1, ..., n - 1], �빹��һ������B[0, 1, ..., n - 1], 
//����B�е�Ԫ��B[i] = A[0] * A[1] * ...*A[i - 1] * A[i + 1] * ...*A[n - 1]��
//����ʹ�ó�����

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	//����һ�����һ��һ���˵ķ��� O(n^2)
	vector<int> multiply(const vector<int>& A) 
	{
		int aLen = A.size();
		vector<int> B;
		for (int i = 0; i < aLen; i++)
		{
			int temp = 1;
			for (int j = 0; j < aLen; j++)
			{
				if (i != j)
					temp *= A[j];
			}
			B.push_back(temp);
		}
		return B;
	}
};