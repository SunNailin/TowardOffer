//һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
//�����������һ��n����̨���ܹ��ж�����������

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	static int jumpFloorII(int number) {
		vector<int> vFun;
		vFun.push_back(1);
		for (int i = 1; i<number; i++)
		{
			int tempN = 1;
			for (int j = 0; j < i; j++)
			{
				tempN += vFun[j];
			}
			vFun.push_back(tempN);
		}
		return vFun[number - 1];
	}
};

int main()
{
	int n;
	cin >> n;
	cout << Solution::jumpFloorII(n);
	getchar();
}