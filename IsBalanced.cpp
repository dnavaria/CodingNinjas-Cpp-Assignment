/*
is Balanced

Given a binary tree, check if its balanced i.e. depth of left and right subtrees of every node differ by at max 1. Return true if given binary tree is balanced, false otherwise.
Input format :

Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

Sample Input 1 :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1 :
false
Sample Input 2 :
1 2 3 -1 -1 -1 -1
Sample Output 2 :
true
*/


// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/



pair<bool,int> helper(BinaryTreeNode<int> *root){
	 if (root==NULL){
	 	pair<bool,int> p;
	 	p.first = true;
	 	p.second = 0;
         return p;
	 }

	pair<bool,int> leftAns = helper(root->left);
	pair<bool,int> rightAns = helper(root->right);

	pair<bool,int> result;
	if(leftAns.first == true && rightAns.first == true ){
		if (leftAns.second - rightAns.second == 1 || leftAns.second - rightAns.second == 0 || leftAns.second - rightAns.second == -1 ){
			result.first = true;
			result.second = max(leftAns.second,rightAns.second)+1 ;	
		}
	}else{
		result.first = false;
		result.second = max(leftAns.second,rightAns.second)+1 ;
	}

	return result;
}


bool isBalanced(BinaryTreeNode<int> *root) {
	
	pair<bool,int> x = helper(root);
    return x.first; 
}