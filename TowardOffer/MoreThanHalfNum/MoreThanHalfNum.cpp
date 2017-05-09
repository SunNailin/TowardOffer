#include <iostream>
#include <vector>
#include <unordered_map>
//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
//��������һ������Ϊ9������{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }��
//��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��

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