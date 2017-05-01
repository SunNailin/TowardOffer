#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> tempJi,tempOu;
		int arrayLen = array.size();
		for (int i = 0; i < arrayLen; i++)
		{
			if (array[i] % 2 == 0)
				tempOu.push_back(array[i]);
			else
				tempJi.push_back(array[i]);
		}
		array = tempJi;
		for (int i = 0; i < tempOu.size(); i++)
		{
			array.push_back(tempOu[i]);
		}

	}
};