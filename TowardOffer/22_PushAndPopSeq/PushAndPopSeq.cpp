#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution{
public:
	stack<int> dataStack;
	bool isPopOrder(vector<int> pushV, vector<int> popV)
	{
		bool flag = false;
		int pushPointer = 0, popPointer = 0;
		if (pushV.size() != 0 && popV.size() != 0)
		{
			while (pushV[pushPointer] == popV[popPointer])
			{

			}
		}
	}
};