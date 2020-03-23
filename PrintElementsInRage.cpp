/*
Code: Print Elements in Range

Given a Binary Search Tree and two integers k1 and k2, find and print the elements which are in range k1 and k2 (both inclusive).
Print the elements in increasing order.
Input format :
Line 1 : Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Line 2 : Two Integers k1 and k2
Output Format :
Required elements (separated by space)
Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
6 10
Sample Output :
6 7 8 10
*/


#include<vector>
#include<algorithm>
void printTree(BinaryTreeNode<int> *root , int k1, int k2, vector<int> &v){
	if (root==NULL){
		return;
	}

	if(root->data >= k1 && root->data <= k2){
		v.push_back(root->data);
	}
	printTree(root->left,k1,k2,v);	
	printTree(root->right,k1,k2,v);	
}

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	if(root==NULL){
		return;
	}

	vector<int> v;

	printTree(root,k1,k2,v);

	sort(v.begin(),v.end());

	for(int i = 0; i <v.size() ; i++){ 
		cout<<v.at(i)<<" ";
	}
}