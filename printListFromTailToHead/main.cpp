#include "list.h"

//�������β��ͷ����������㷨
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

