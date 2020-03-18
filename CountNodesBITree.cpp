/*
	Count Number Of Nodes in BI Tree Recursivelys
*/

int countNodes(BinaryTreeNode<int> *root){
	if (root == NULL){
		return 0;
	}

	return 1 + countNodes(root->left) + countNodes(root->right);
}