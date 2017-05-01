#include <iostream>
#include <list>
//递归实现两个链表的合并
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == NULL)
			return pHead2;
		else if (pHead2 == NULL)
			return pHead1;

		ListNode* pMergedHead = NULL;

		if (pHead1->val < pHead2->val)
		{
			pMergedHead = pHead1;
			pMergedHead->next = Merge(pHead1->next, pHead2);
		}
		if (pHead1->val >= pHead2->val)
		{
			pMergedHead = pHead2;
			pMergedHead->next = Merge(pHead1, pHead2->next);
		}
		return pMergedHead;
	}
};