//我们可以用2 * 1的小矩形横着或者竖着去覆盖更大的矩形。
//请问用n个2 * 1的小矩形无重叠地覆盖一个2 * n的大矩形，总共有多少种方法？

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