#include "list.h"

//将链表从尾到头输出，迭代算法
vector<int> printListFromTailToHead(ListNode *head)
{
	vector<int> arrayList;
	if (head != NULL)
	{
		arrayList.insert(arrayList.begin(), head->val);
		while (head->next != NULL)
		{
			arrayList.insert(arrayList.begin(), head->next->val);
			head = head->next;
		}
		
	}
	return arrayList;
}

