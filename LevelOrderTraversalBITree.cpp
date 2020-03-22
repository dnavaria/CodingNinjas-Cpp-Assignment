/*
Level order traversal

Given a binary tree, print the level order traversal. Make sure each level start in new line.
Input format :

Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
5 
6 10 
2 3 
9
*/

#include<queue>
void printLevelATNewLine(BinaryTreeNode<int> *root) {
    
	if(root==NULL){
		return;
	}

	queue<BinaryTreeNode<int>*> q;
	
	q.push(root);
	q.push(NULL);
	
	while(q.size()>1 ){
		
		BinaryTreeNode<int> *front = q.front();
		q.pop();

		if(front!=NULL){
			cout<<front->data<<" ";
		}else{
			cout<<endl;
			q.push(NULL);

		}
		
		if(front!=NULL && front->left!=NULL){
			q.push(front->left);
		}
		if(front!=NULL && front->right!=NULL){
			q.push(front->right);
		}
		

	}

}