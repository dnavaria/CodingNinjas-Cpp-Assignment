/*
Min and Max of Binary Tree

Given a binary tree, find and return the min and max data value of given binary tree.
Return the output as an object of PairAns class, which is already created.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Max and min (separated by space)
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
14 1
*/

#include <climits>

PairAns minMax(BinaryTreeNode<int> *root) {

	if (root==NULL){
		PairAns p;
		p.min = INT_MAX;
		p.max = INT_MIN;
		return p;
	}
	
	if(root->left == NULL && root->right == NULL){
		PairAns p;
		p.min = root->data;
		p.max = root->data;
		return p;
	}

	PairAns leftAnswer = minMax(root->left);
	if (root->left == NULL){
		leftAnswer.min = root->data;	
		leftAnswer.max = root->data;
	}
	PairAns rightAnswer = minMax(root->right);
	if(root->right==NULL){
		rightAnswer.min = root->data;	
		rightAnswer.max = root->data;
	}

	int lmax = leftAnswer.max;
	int lmin = leftAnswer.min;
	int rmax = rightAnswer.max;
	int rmin = rightAnswer.min;

	PairAns result;
	result.max = max(lmax,max(rmax,root->data));
	result.min = min(lmin,min(rmin,root->data));
	return result;
}



/*
	Solution - 2

	PairAns minMax(BinaryTreeNode<int> *root) {
		PairAns p;
		p.min = INT_MAX;
		p.max = INT_MIN;

		if(root==NULL){
			return p;
		}

		PairAns leftPair = minMax(root->left);
		PairAns rightPair = minMax(root->right);

		p.max = max(max(leftPair.max,rightPair.max),root->data);
		p.min = min(min(leftpair.min,rightPair.min),root->data);

		return p;


	}	 

*/






