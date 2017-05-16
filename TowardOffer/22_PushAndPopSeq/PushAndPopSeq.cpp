#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution{
public:
	stack<int> dataStack;
	bool isPopOrder(vector<int> pushV, vector<int> popV)
	{
		if (pushV.size() == 0 && popV.size() == 0)
		{
			return 1;
		}
		else if (pushV.size() != popV.size())
		{
			return 0;
		}
		else
		{
			vector<int> stack;
			for (int i = 0, j = 0; i < pushV.size();)
			{
				stack.push_back(pushV[i++]);
				while (j < popV.size() && stack.back() == popV[j])
				{
					stack.pop_back();
					j++;
				}
			}
			return stack.empty();
		}
	}
};