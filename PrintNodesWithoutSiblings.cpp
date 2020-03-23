/*
	Nodes without siblings
*/

void nodesWithoutSibling(BinaryTreeNode<int> *root) {
    static int count = 0;
    if(root == NULL){
        return;
    }
    if( (root->left == NULL && root->right != NULL)  ){
    	cout<<root->right->data<<endl;
    }else if((root->left != NULL && root->right == NULL)){
    	cout<<root->left->data<<endl;
    }
    nodesWithoutSibling(root->left);
    nodesWithoutSibling(root->right);

}
