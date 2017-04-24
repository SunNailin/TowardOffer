//一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
//求该青蛙跳上一个n级的台阶总共有多少种跳法。

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