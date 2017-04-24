//给定一个数组A[0, 1, ..., n - 1], 请构建一个数组B[0, 1, ..., n - 1], 
//其中B中的元素B[i] = A[0] * A[1] * ...*A[i - 1] * A[i + 1] * ...*A[n - 1]。
//不能使用除法。

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	//方法一：最笨的一个一个乘的方法 O(n^2)
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