#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;


class Solution {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2)
	{
		set<int> save;
		set<int>::iterator iter;
		for (int i = 0; i < data.size(); i++)
		{
			if (save.find(data[i]) == save.end())
			{
				save.insert(data[i]);
			}
			else
			{
				iter = save.find(data[i]);
				save.erase(iter);
			}
		}
		iter = save.begin();
		*num1 = *iter;
		*num2 = *(++iter);
	}
}; int main()
{
	vector<int> data = { 2, 4, 3, 6, 3, 2, 5, 5 };
	int *num1 = 0, *num2 = 0;
	Solution::FindNumsAppearOnce(data, *num1, *num2);
	cout << *num1 << *num2;
	getchar();
}