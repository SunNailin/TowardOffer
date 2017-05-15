#include <iostream>
#include <stack>

using namespace std;

class Solution{
public:
	void push(int value)
	{
		m_stack.push(value);

		if (m_minStack.size() == 0 || value < m_minStack.top())
		{
			m_minStack.push(value);
		}
		else
			m_minStack.push(m_minStack.top());
	}

	void pop()
	{
		if (m_stack.size() && m_minStack.size())
		{
			m_stack.pop();
			m_minStack.pop();
		}
	}

	int top()
	{
		return m_stack.top();
	}

	int min()
	{
		return m_minStack.top();
	}

private:
	stack<int> m_stack;
	stack<int> m_minStack;
};