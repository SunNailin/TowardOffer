#include <iostream>
#include <vector>

using namespace std;
//��ʵ��һ����������֮���δ�ӡ������������һ�а��մ����ҵ�˳���ӡ��
//�ڶ��㰴�մ��������˳���ӡ�������а��մ����ҵ�˳���ӡ���������Դ����ơ�

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
	vector<vector<int> > Print(TreeNode* pRoot) {

	}

};