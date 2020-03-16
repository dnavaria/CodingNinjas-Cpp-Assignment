/*
	Count Number of nodes in a tree 
*/

int numNodes(Tree<int>* root){
	if(root == NULL){
		return 0;
	}
	int ans = 1;
	for(int i = 0; i <root->children.size() ; i++){ 
		ans+=numNodes(root->children[i]);
	}
	return ans;
}