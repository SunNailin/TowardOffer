#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	static int Fibonacci(int n)
	{
		vector<int> vFib;
		vFib.push_back(1);
		vFib.push_back(2);
		for (int i = 2; i < n; i++)
		{
			int temp = vFib[i - 1] + vFib[i - 2];
			vFib.push_back(temp);
		}
		return vFib[n - 1];
	}
};