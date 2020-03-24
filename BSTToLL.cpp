/*
Code: BST to Sorted LL

Given a BST, convert it into a sorted linked list. Return the head of LL.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Linked list elements (separated by space)
Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
Sample Output :
2 5 6 7 8 10
*/

// Following is the Binary Tree node structure
/**************
 
 template <typename T>
 class Node{
    public:
    T data;
    Node<T> *next;
    
    Node(T data){
        this -> data = data;
        this -> next = NULL;
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

class link{
public:
	Node<int> *head;
	Node<int> *tail;
};

link helper(BinaryTreeNode<int>* root) {
	if(root==NULL){
		link o;
		o.head = NULL;
		o.tail = NULL;
		return o;
	}
	if(root->left==NULL && root->right==NULL){
		Node<int> *node = new Node<int>(root->data);
		link o;
		o.head = node;
		o.tail = node;
		return o;
	}

	link left = helper(root->left);
	Node<int> *mid = new Node<int>(root->data);
	link right = helper(root->right);

	if(left.head==NULL && left.tail==NULL ){
		mid->next = right.head;
		link x;
		x.head = mid;
		x.tail = right.head;
		return x;
	}else{
		left.tail->next = mid;
		mid->next = right.head;
		link x;
		x.head = left.head;
		x.tail = right.tail;
		return x;
	}
}

Node<int>* constructBST(BinaryTreeNode<int>* root) {

	return helper(root).head;
}