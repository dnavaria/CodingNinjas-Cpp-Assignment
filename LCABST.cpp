/*
LCA of BST

Given a binary search tree and two nodes, find LCA(Lowest Common Ancestor) of the given two nodes in the BST. Read about LCA if you are having doubts about the definition.
If out of 2 nodes only one node is present, return that node.
If both are not present, return -1.
Input format :
Line 1 :  Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Line 2 : Two integers, Node 1 and Node 2 (separated by space)
Output Format :
LCA
Constraints :
1 <= N <= 1000
Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2 10
Sample Output 1:
8
Sample Input 2:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2 6
Sample Output 2:
5
Sample Input 3:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
12 78
Sample Output 3:
-1
*/


int helper(BinaryTreeNode<int>* root , int val1 , int val2){
	
	if(root->data == val1 || root->data == val2){
		return root->data;
	}else if( (root->left!=NULL && root->right!=NULL) && (root->left->data == val1 && root->right->data == val2) || (root->left->data == val2 && root->right->data == val1) ){
		return root->data;
	}else{
		return -1;
	}

	int x=-1,y=-1;
	if(root->left){
		x = helper(root->left,val1,val2);
	}
	if(root->right){
		y = helper(root->right,val1,val2);
	}

	 if(x!=-1 && y == -1){
    	return x;
    }else if(x == -1 && y != -1){
    	return y;
    }else if(x == -1 && y == -1){
    	return -1;
    }else if(x != -1 && y != -1){
    	return root->data;
    }


}

int lcaInBST(BinaryTreeNode<int>* root , int val1 , int val2){
	if(root->data == val1 || root->data == val2){
		return root->data;
	}
	if(val1 < root->data && val2 > root->data){
		return root->data;
	}

	int x = max(val1,val2);
	int result = -1;

	if(root->data > x){
		if(root->left){
			result =  helper(root->left,val1,val2);
		}
		
	}else if(root->data < x){
		if (root->right){
			result =  helper(root->right,val1,val2);	
		}
		
	}

return result;
}
