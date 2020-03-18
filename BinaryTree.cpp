/*
	Binary Tree
*/


#include<iostream>
#include<queue>
using namespace std;

template <typename T>

class BinaryTreeNode{
	
public:
	T data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
	BinaryTreeNode(T data ){
		this->data = data;
		left = NULL;
		right = NULL;
	}

	~BinaryTreeNode(){
		delete left;
		delete right;
	}
	
};


void printTree(BinaryTreeNode<int>* root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<":";
	if(root->left != NULL){
		cout<<"L"<<root->left->data;
	}
	if(root->right != NULL){
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	printTree(root->left);
	printTree(root->right);
}

BinaryTreeNode<int>* takeInputRecursive(){
	int rootData;
	//cout<<" Enter data"<<endl;
	cin>>rootData;
	if (rootData == -1){
		return NULL;
	}
	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int> *leftChild = takeInputRecursive();
	BinaryTreeNode<int> *rightChild = takeInputRecursive();
	root->left = leftChild;
	root->right = rightChild;
	return root;
}

BinaryTreeNode<int>* takeInputLevelWise(){
	int rootData;
	cin>>rootData;
	if (rootData == -1){
		return NULL;
	}

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> pendingNodes;

	pendingNodes.push(root);

	while(pendingNodes.size()!=0){

		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();

		//cout<<"Enter leftChild of "<<front->data<<endl;
		int leftChildData;
		cin>>leftChildData;
		if (leftChildData!=-1){
			BinaryTreeNode<int> *leftChild = new BinaryTreeNode<int>(leftChildData);
			front->left = leftChild;
			pendingNodes.push(leftChild);
		}

		//cout<<"Enter rightChild of "<<front->data<<endl;
		int rightChildData;
		cin>>rightChildData;
		if (rightChildData!=-1){
			BinaryTreeNode<int> *rightChild = new BinaryTreeNode<int>(rightChildData);
			front->right = rightChild;
			pendingNodes.push(rightChild);
		}
	}

	return root;
}

int main(){
/*
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);	
	BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);	
	BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);	
	root->left = node1;
	root->right = node2;
*/

	// Input Recursive - 1 2 4 -1 -1 5 -1 -1 3 -1 -1
	//BinaryTreeNode<int> *root = takeInputRecursive(); 

	//INput Level Wise - 1 2 3 4 5 -1 -1 6 7 -1 -1 -1 -1 
	BinaryTreeNode<int> *root = takeInputLevelWise(); 
	printTree(root);
	delete root;
	return 0;
}