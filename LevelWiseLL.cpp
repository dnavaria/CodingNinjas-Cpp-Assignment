/*
Level wise linkedlist

Given a binary tree, write code to create a separate linked list for each level. You need to return the array which contains head of each level linked list.
Input format :

Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

Output format : Each level linked list is printed in new line (elements separated by space).

Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
5 
6 10 
2 3 
9
*/


/**************
class node{
public:
    T data;
    node<T> * next;
    node(T data){
        this->data=data;
        this->next=NULL;
    }
};

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

#include <queue>
#include <vector>



vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {
    vector<node<int>*> ptr;
    if (root==NULL){
    	ptr.push_back(NULL);
    	return ptr;
    }

	queue<BinaryTreeNode<int>*> q;
	q.push(root);
	q.push(NULL);

	
    
    node<int> *newHead=NULL;
    node<int> *newHeadPtr=NULL;
    node<int> *head;
    while(q.size()>1){
        
    	BinaryTreeNode<int> *front = q.front();
    	
    	
    	q.pop();

    	if (front!=NULL){
			head  = new node<int>(front->data);
            if(newHead==NULL){
                newHead = head;
                newHeadPtr = newHead;
            }else{
                newHeadPtr->next = head;
                newHeadPtr = newHeadPtr->next;
            }
        
    	}else{
    		
    		ptr.push_back(newHead);
            newHead = NULL;
            newHeadPtr = NULL;
    		q.push(NULL);
    	}

    	if (front != NULL && front->left!=NULL){
    		q.push(front->left);
    	}
    	if (front != NULL && front->right!=NULL){
    		q.push(front->right);
    	}
    }
    ptr.push_back(newHead);
    
return ptr;
}