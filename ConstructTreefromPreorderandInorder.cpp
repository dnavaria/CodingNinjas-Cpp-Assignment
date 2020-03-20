 /*
Code: Construct Tree from Preorder and Inorder

Given Preorder and Inorder traversal of a binary tree, create the binary tree associated with the traversals.You just need to construct the tree and return the root.
Note: Assume binary tree contains only unique elements.
Input format :

Line 1 : n (Total number of nodes in binary tree)

Line 2 : Pre order traversal

Line 3 : Inorder Traversal

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :
12
1 2 3 4 15 5 6 7 8 10 9 12
4 15 3 2 5 1 6 10 8 7 9 12
Sample Output :
1 
2 6 
3 5 7 
4 8 9 
15 10 12
 */

BinaryTreeNode<int>* createNode(int data){
	BinaryTreeNode<int> *node = new BinaryTreeNode<int>(data);
	return node;
}
 
int searchNode(int *arr,int start, int end, int data){
	int i=start;
	for(; i <=end ; i++){ 
		if (arr[i] == data)
		{
			return i;
		}
	}
}

BinaryTreeNode<int>* builder(int *preorder, int preLength, int *inorder, int inLength, int start, int end) {
	static int preIndex = 0;

	if(start>end){
		return NULL;
	}

	BinaryTreeNode<int> *root = createNode(preorder[preIndex++]);

	if (start==end){
		return root;
	}

	int inIndex = searchNode(inorder,start,end,root->data);

	root->left = builder(preorder,preLength,inorder,inLength,start,inIndex-1);
	root->right = builder(preorder,preLength,inorder,inLength,inIndex+1,end);

	return root;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {

	return builder(preorder,preLength,inorder,inLength, 0, preLength);

}

/*
	//using preorder indexes

int searchNode(int *arr,int start, int end, int data){
	int i=start;
	for(; i <=end ; i++){ 
		if (arr[i] == data)
		{
			return i;
		}
	}
}




BinaryTreeNode<int>* builder(int *in, int *pre, int inS, int inE, int preS, int preE) {
	if(inS>inE){
		return NULL;
	}
	
	int rootData = pre[preS];
	int rootIndex = searchNode(in,inS,inE,rootData);
	 
	int lPreS = preS+1;
	int lInS = inS;
	int lInE = rootIndex-1;
	int lPreE = lInE - lInS + lPreS;
	int rPreS = lPreE+1;
	int rPreE = preE;
	int rInS = rootIndex + 1;
	int rInE = inE;
	
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	root->left = builder(in,pre,lInS,lInE,lPreS,lPreE);
	root->right = builder(in,pre,rInS,rInE,rPreS,rPreE);
	return root;

}

BinaryTreeNode<int>* buildTree(int *pre, int preLength, int *in, int inLength) {

	return builder(in,pre,0,preLength-1,0,preLength-1); 

}


*/


