//���ǿ�����2 * 1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
//������n��2 * 1��С�������ص��ظ���һ��2 * n�Ĵ���Σ��ܹ��ж����ַ�����

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	int rectCover(int number)
	{
		vector<int> vFun;
		vFun.push_back(1);
		vFun.push_back(2);
		for (int i = 2; i < number; i++)
		{
			int temp = vFun[i - 1] + vFun[i - 2];
			vFun.push_back(temp);
		}
		return vFun[number - 1];
	}
};