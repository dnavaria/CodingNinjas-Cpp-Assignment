/*
Code : Find a node

Given a Binary Tree and an integer x, check if node with data x is present in the input binary tree or not. Return true or false.
Input format :
Line 1 : Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Line 2 : Integer x
Output Format :
true or false
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
7
Sample Output :
true
*/




bool isNodePresent(BinaryTreeNode<int>* root, int x) {
	if (root==NULL)
	{
		return false;
	}
	
    if(root->data == x){
		return true;
	}
	bool val1 = isNodePresent(root->left,x);
    bool val2 = isNodePresent(root->right,x);
	return (val1)? val1 : val2;
}
