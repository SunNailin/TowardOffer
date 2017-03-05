#include "list.h"

//将链表从尾到头输出，迭代算法
vector<int> printListFromTailToHead(ListNode *head)
{
	vector<int> arrayList;
	//判断传入是否为空指针
	if (head != NULL)
	{
		// 现将头结点的数值插入到列表头部
		arrayList.insert(arrayList.begin(), head->val);
		//循环，判断下一个节点是否为空，不为空则循环
		while (head->next != NULL)
		{
			//将下一个节点的值插入列表头部
			arrayList.insert(arrayList.begin(), head->next->val);
			//指针指向下一个节点
			head = head->next;
		}		
	}
	return arrayList;
}

