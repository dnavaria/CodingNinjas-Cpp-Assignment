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


// Approach - 1

// T(N) = 2T(N/2) + K*N -> O(NLogN) - average case
// T(N) = T(N-1) + K*N -> O(N^2) - worst case - skewed tree
// Or O(N * H) where H is height
/*
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
*/



// Approach - 2
// T(n) = 2T(n/2) + K -> O(n)
/*
class IsBSTReturn{
public:
	bool isBST;
	int minimum;
	int maximum;
};

IsBSTReturn isBST(BinaryTreeNode<int> *root){
	
	if (root==NULL){
		IsBSTReturn Output;
		Output.isBST = true;
		Output.minimum = INT_MAX;
		Output.maximum = INT_MIN;
		return Output;
	}

	IsBSTReturn left = isBST(root->left);
	IsBSTReturn right = isBST(root->right);

	int minimum = min(root->data, min(left.minimum, right.minimum));
	int maximum = max(root->data, max(left.maximum, right.maximum));

	bool isBSTFinal = (root->data > left.maximum) && (root->data <= right.minimum) && (left.isBST && right.isBST) ;

	IsBSTReturn Output;
	Output.minimum = minimum;
	Output.maximum = maximum;
	Output.isBST = isBSTFinal;

	return Output;

}

*/

// Approach - 3
bool isBST(BinaryTreeNode<int> *root, int min=INT_MIN, int max=INT_MAX){
	if (root==NULL){
		return true;
	}

	if (root->data < min || root->data > max){
		return false;
	}

	bool isLeftOk = isBST(root->left,min,root->data - 1);
	bool isRightOk = isBST(root->right,root->data,max);

	return isLeftOk && isRightOk;
}
