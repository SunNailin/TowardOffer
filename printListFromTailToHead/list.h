#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <vector>

using namespace std;

#ifdef NULL
#endif

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

class Solution{
public:
	vector<int> printListFromTailToHead(ListNode *head);	
};

