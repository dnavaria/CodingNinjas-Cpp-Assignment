/*
Print all nodes at Depth k
*/

void printAtDepthK(TreeNode<int>* root, int k){
	if(root == NULL){
		return;
	}
	if (k == 0 ){
		cout<<root->data<<endl;
	}
	for(int i = 0; i <root->children.size() ; i++){ 
		printAtDepthK(root->children[i],k-1 );
	}
}
