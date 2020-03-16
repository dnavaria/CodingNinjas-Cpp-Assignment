/*
Code : Max data node

Given a generic tree, find and return the node with maximum data. You need to return the complete node which is having maximum data.
Return null if tree is empty.
Input format :
Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Node with largest data
Sample Input :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output :
50
*/
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
	if(root==NULL){
		return NULL;
	}

	TreeNode<int>* maxNode = root;
	for(int i = 0; i <root->children.size() ; i++){ 
		TreeNode<int>* temp = maxDataNode(root->children[i]);
		if (maxNode->data < temp->data)
		{	
			maxNode = temp;
		}
		
	}

	return maxNode;
}

