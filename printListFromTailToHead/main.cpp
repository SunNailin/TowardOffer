#include "list.h"

//�������β��ͷ����������㷨
vector<int> printListFromTailToHead(ListNode *head)
{
	vector<int> arrayList;
	//�жϴ����Ƿ�Ϊ��ָ��
	if (head != NULL)
	{
		// �ֽ�ͷ������ֵ���뵽�б�ͷ��
		arrayList.insert(arrayList.begin(), head->val);
		//ѭ�����ж���һ���ڵ��Ƿ�Ϊ�գ���Ϊ����ѭ��
		while (head->next != NULL)
		{
			//����һ���ڵ��ֵ�����б�ͷ��
			arrayList.insert(arrayList.begin(), head->next->val);
			//ָ��ָ����һ���ڵ�
			head = head->next;
		}		
	}
	return arrayList;
}

