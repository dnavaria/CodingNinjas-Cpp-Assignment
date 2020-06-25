/*
	BST Class
*/
template <typename T>
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

 class BST{
 	BinaryTreeNode<int> *root;

public:
 	BST(){
 		root=NULL;
 	}

 	~BST(){
 		delete root;
 	}

private:
 	BinaryTreeNode<int>* deleteData(int data, BinaryTreeNode<int> *root){
 		if (root==NULL){
 			return NULL;
 		}

 		if (data > root->data){
 			root->right = deleteData(data,root->right);
 			return root;
 		}else if(data < root->data){
 			root->left = deleteData(data,root->left);
 			return root;
 		}else{
 			if (root->left == NULL && root->right == NULL){
 				delete root;
 				return NULL;
 			}else if(root->left == NULL){
 				BinaryTreeNode<int> *temp = root->right;
 				root->right = NULL;
 				delete root;
 				return temp; 
 			}else if(root->right==NULL){
 				BinaryTreeNode<int> *temp = root->left;
 				root->left = NULL;
 				delete root;
 				return temp; 
 			}else{
 				BinaryTreeNode<int> *minNode = root->right;
 				while(minNode->left!=NULL){
 					minNode=minNode->left;
 				}
 				int rightMin = minNode->data;
 				root->data = rightMin;
 				root->right = deleteData(rightMin,root->right);
 				return root;
 			}
 		}
 }	
public:
	void deleteData(int data){
		root = deleteData(data,root);
 	}

private:
 	BinaryTreeNode<int>* insert(int data, BinaryTreeNode<int> *root){
 		if (root==NULL){
 			BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
 			return newNode;
 		}

 		if (data < root->data){
 			root->left = insert(data,root->left);
 		}else{
 			root->right = insert(data,root->right);
 		}

 		return root;
 	}

public:
	void insert(int data){
		this->root = insert(data,this->root);
 	}

private:
 	bool searchBST(int data, BinaryTreeNode<int> *root){
 		if(root==NULL){
 			return false;
 		}

 		if(root->data == data){
 			return true;
 		}else if(data < root->data){
 			return searchBST(data,root->left);
 		}else{
 			return searchBST(data,root->right);	
 		}
 	}
 		
public:
 	bool hasData(int data){
 		return searchBST(data,root);
 	}
 	
private:
	void printTree(BinaryTreeNode<int> *root){
		if(root==NULL){
			return;
		}

		cout<<root->data<<":";
		if (root->left){
			cout<<"L:"<<root->left->data;
		}
		if(root->left!=NULL){
			cout<<",";
		}
		
		if (root->right){
			cout<<"R:"<<root->right->data;
		}
		cout<<endl;
		printTree(root->left);
		printTree(root->right);
	}

public:
	void printTree(){
		printTree(root);
	}
 };