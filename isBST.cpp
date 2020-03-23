/*
Check if a Binary Tree is BST

Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree) or not. If yes, return true, return false otherwise.
Duplicate elements should be in right subtree.
Input format :
Line 1 : Nodes in level order form (separated by space). If any node does not have left or right child, take -1 in its place
Output format :
true or false
Constraints :
1 <= N <= 10^5
Sample Input 1 :
3 1 5 -1 2 -1 -1 -1 -1
Sample Output 1 :
true
Sample Input 2 :
5 2 10 0 1 -1 15 -1 -1 -1 -1 -1 -1
Sample Output 2 :
false
*/


// T(N) = 2T(N/2) + K*N -> O(NLogN) - average case
// T(N) = T(N-1) + K*N -> O(N^2) - worst case - skewed tree

int maximum(BinaryTreeNode<int>* root){
	if (root==NULL){
		return INT_MIN;
	}
	return max(root->data, max(maximum(root->left), maximum (root->right)));
}

int minimum(BinaryTreeNode<int>* root){
	if (root==NULL){
		return INT_MAX;
	}
	return min(root->data, min(minimum(root->left), minimum(root->right)));
}

bool isBST(BinaryTreeNode<int> *root){
	
	if (root==NULL){
		return true;
	}

	int leftMax =  maximum(root->left);
	
	int rightMin =  minimum(root->right);
	
	bool Output = ((root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right));

	return Output;
}