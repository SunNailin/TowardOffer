//请实现一个函数，将一个字符串中的空格替换成“%20”。
//例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

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