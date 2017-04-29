#include <iostream>

using namespace std;

class Solution{
public:
	static double Power(double base, int exponent)
	{
		double res = 1.0;
		if (exponent == 0)
			return 1;
		else if (exponent > 0)
		{
			for (int i = 0; i < exponent; i++)
			{
				res *= base;
			}
			return res;
		}
		else if (exponent < 0)
		{
			if (base < 0)
			{
				return -1;
			}
			else {
				for (int i = 0; i < -exponent; i++)
				{
					res *= base;
				}
				return 1 / res;
			}
		}
	}
};

int main(){
	cout << Solution::Power(2.44, 6);
}