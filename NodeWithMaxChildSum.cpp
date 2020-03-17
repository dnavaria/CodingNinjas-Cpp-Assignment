/*
Node with maximum child sum

Given a tree, find and return the node for which sum of data of all children and the node itself is maximum. In the sum, data of node itself and data of immediate children is to be taken.
Input format :
Line 1 : Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output format :
Node with maximum sum.
Sample Input 1 :
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
Sample Output 1 :
1
*/



TreeNode<int>* msn(TreeNode<int> *root,int s, TreeNode<int> *y){
	if (root == NULL){
		return root;
	}
	int sum = 0;
	int temp = root->data;
	
	for(int i = 0; i <root->children.size() ; i++){ 
		if (i!=0){
			sum = sum + (root->children[i]->data);
		}else{
			sum = sum + temp + (root->children[i]->data);
		}
	}

	if (s<sum)
	{
		s = sum;
		y = root;
	}

	for(int i = 0; i <root->children.size() ; i++){ 
		y = msn(root->children[i],s,y);
	}

return y;
}

TreeNode<int>* maxSumNode(TreeNode<int> *root){
	if (root == NULL){
		return root;
	}

	TreeNode<int>* result = msn(root,0,NULL);
	return result;
}

