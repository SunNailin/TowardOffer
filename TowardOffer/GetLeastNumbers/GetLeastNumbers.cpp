#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
	static vector<int> GetLeastNumbers(vector<int> input, int k)
	{
		vector<int> res;
		if (k> input.size())
		{
			return res;
		}

		sort(input.begin(), input.end());

		for (int i = 0; i < k; i++)
		{
			res.push_back(input[i]);
		}
		return res;
	}
};