//��һ������Ϊn����������������ֶ���0��n - 1�ķ�Χ�ڡ� 
//������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�Ҳ��֪��ÿ�������ظ����Ρ�
//���ҳ�����������һ���ظ������֡� 
//���磬������볤��Ϊ7������{ 2, 3, 1, 0, 2, 5, 3 }����ô��Ӧ��������ظ�������2����3��

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>



using namespace std;

class Solution{
public:
	bool duplicate(int numbers[], int length, int *duplication)
	{
		bool flag = false;
		set<int> sData;
		set<int>::iterator itr;
		for (int i = 0; i < length; i++)
		{
			if (sData.find(numbers[i]) == sData.end())
			{
				sData.insert(numbers[i]);
			}
			else
			{
				*duplication = numbers[i];
				flag = true;
			}
		}
		return flag;		
	}
};


int main(){
	cout << "kakak";
}