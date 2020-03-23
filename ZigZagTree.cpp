/*
ZigZag tree

Given a binary tree, print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even level right to left.
Input format :

Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
5
10 6
2 3
9
*/
#include<stack>

void zigZagOrder(BinaryTreeNode<int> *root) {

	if(root==NULL){
		return;
	}

	stack<BinaryTreeNode<int>*> s1;
	stack<BinaryTreeNode<int>*> s2;
	
	bool lTR = true;
	s1.push(root);
	while(!s1.empty() ){
		
		BinaryTreeNode<int> *topElement =  s1.top();
		s1.pop();

		if(topElement){
			cout<<topElement->data<<" ";

			if(lTR){
		
			    if (topElement->left){
				    s2.push(topElement->left);
			    }
                if (topElement->right){
				    s2.push(topElement->right);
			    }
			
		}else{
			if (topElement->right){
				s2.push(topElement->right);
			}
			if (topElement->left){
				s2.push(topElement->left);
			}
		}
        if (s1.empty()){
			cout<<endl;
			lTR = !(lTR);
			swap(s1,s2);
		}
    	
    	}
	}
}
