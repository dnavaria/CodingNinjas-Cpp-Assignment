/*
Code : Find sum of nodes

Given a generic tree, count and return the sum of all nodes present in the given tree.
Input format :
Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Sum of all nodes
Sample Input :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output :
190
*/
#include <iostream>
#include <climits>
using namespace std;

int sumOfNodes(TreeNode<int>* root) {
	if (root == NULL){
		return INT_MIN;
	}

	int total = 0;
	for(int i = 0; i <root->children.size() ; i++){ 
		total+=sumOfNodes(root->children[i]);
	}

	return total+root->data;
}

