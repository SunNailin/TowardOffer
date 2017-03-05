#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <vector>

using namespace std;

#ifdef NULL
#endif


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

 class solution{
 public:
	 TreeNode reConstructBinaryTree(vector<int> pre, vector<int> vin);
 };