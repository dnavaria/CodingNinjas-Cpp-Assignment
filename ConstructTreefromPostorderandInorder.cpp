/*
Construct Tree from Postorder and Inorder

Given Postorder and Inorder traversal of a binary tree, create the binary tree associated with the traversals.You just need to construct the tree and return the root.
Note: Assume binary tree contains only unique elements.
Input format :

Line 1 : n (Total number of nodes in binary tree)

Line 2 : Post order traversal

Line 3 : Inorder Traversal

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :
8
8 4 5 2 6 7 3 1
4 8 2 5 1 6 3 7
Sample Output :
1 
2 3 
4 5 6 7 
8
*/



int searchNode(int *arr,int start, int end, int data){
	int i=start;
	for(; i <=end ; i++){ 
		if (arr[i] == data)
		{
			return i;
		}
	}
}



BinaryTreeNode<int>* builder(int *in, int *post, int inS, int inE, int postS, int postE) {
	if(inS>inE){
		return NULL;
	}
	
	int rootData = post[postS];
	int rootIndex = searchNode(in,inS,inE,rootData);
	 
	int rInS = rootIndex + 1;
	int lInE = rootIndex-1;
	int rInE = inE;
	int lInS = inS;
	int lpostE = postE;
	int rpostS = postS-1;
	int rpostE = rpostS - (rInE - rInS);
	int lpostS = rpostE-1;
	
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	root->left = builder(in,post,lInS,lInE,lpostS,lpostE);
	root->right = builder(in,post,rInS,rInE,rpostS,rpostE);
	return root;

}




BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *post, int postLength, int *in, int inLength) {
    
    return builder(in,post,0,postLength-1,postLength-1,0); 
}
