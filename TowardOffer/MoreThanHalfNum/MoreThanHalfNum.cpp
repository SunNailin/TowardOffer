#include <iostream>
#include <vector>
#include <unordered_map>
//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
//例如输入一个长度为9的数组{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }。
//由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。

using namespace std;

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		unordered_map<int, int> map;
		int len = numbers.size();

		for (int i = 0; i < len; i++)
		{
			map[numbers[i]]++;
		}
		unordered_map<int, int>::iterator itr;

		for (itr = map.begin(); itr != map.end();itr++)
		{
			if (itr->second > len / 2)
				return itr->first;
		}
		return 0;
	}
};