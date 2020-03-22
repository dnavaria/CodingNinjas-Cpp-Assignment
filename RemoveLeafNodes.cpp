/*
Remove Leaf nodes

Remove all leaf nodes from a given Binary Tree. Leaf nodes are those nodes, which don't have any children.
Note : Root will also be a leaf node if it doesn't have left and right child. You don't need to print the tree, just remove all leaf nodes and return the updated root.
Input format :

Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
8
3 10
6 14                    
*/

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    if(root==NULL){
    	return root;
    }

    if(root->left==NULL && root->right==NULL){
    	BinaryTreeNode<int> *x = root;
    	delete x;
    	return NULL;
    }
    
    
	BinaryTreeNode<int> *left = removeLeafNodes(root->left);
    BinaryTreeNode<int> *right = removeLeafNodes(root->right);

    root->left = left;
    root->right = right;

    return root;

}
