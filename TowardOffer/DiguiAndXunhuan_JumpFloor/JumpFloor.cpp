#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	static int jumpFloor(int n)
	{
		vector<int> vFun;
		vFun.push_back(1);
		vFun.push_back(2);
		for (int i = 2; i < n; i++)
		{
			int temp = vFun[i - 1] + vFun[i - 2];
			vFun.push_back(temp);
		}
		return vFun[n - 1];
	}
};