//��ʵ��һ����������һ���ַ����еĿո��滻�ɡ�%20����
//���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��

#include <iostream>
#include <string>

using namespace std;

class Solution{
public:
	void replaceSpace(char *str, int length)
	{
		int countSpace = 0;
		for (int i = 0; i < length; i++)
		{
			if (str[i] == ' ')
				countSpace++;
		}
		int j = countSpace * 2 + length;
		int i = length;
		while (j >= 0 && i >= 0)
		{
			if (str[i] != ' ')
			{
				str[j--] = str[i--];
			}
			else if (str[i] == ' ')
			{
				str[j--] = '0';
				str[j--] = '2';
				str[j--] = '%';
				i--;
			}
		}
	}
};