/*
Code: Construct BST from a Sorted Array

Given a sorted integer array A of size n which contains all unique elements. You need to construct a balanced BST from this input array. Return the root of constructed BST.
Note : If array size is even, take first mid as root.
Input format :
Line 1 : Integer n (Size of array)
Line 2 : Array elements (separated by space)
Output Format :
BST elements (in pre order traversal, separated by space)
Sample Input :
7
1 2 3 4 5 6 7
Sample Output :
4 2 1 3 6 5 7 
*/



BinaryTreeNode<int>* createTree(int *input,int start, int end){

    if(start > end){
        return NULL;
    }
    
	int dataIndex = (start+end)/2; 
	
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(input[dataIndex]);

	root->left = createTree(input,start,dataIndex-1);
	root->right = createTree(input,dataIndex+1,end);
	
	return root;
} 


BinaryTreeNode<int>* constructTree(int *input, int n) {

	return createTree(input,0,n-1);
}
