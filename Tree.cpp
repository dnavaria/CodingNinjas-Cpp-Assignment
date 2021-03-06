/*
	TreeNode Class
*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode
{
public:
 	T data;
 	vector<TreeNode<T>*> children; 	
	TreeNode(T data){
 		this->data = data;
	}

	//Deletion of Tree
	~TreeNode(){
		for(int i = 0; i <this->children.size() ; i++){ 
			delete children[i];
		}
	}
};

TreeNode<int>* takeInputRecursive(){
	int rootData;
	cout<<"Enter Data"<<endl;
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	int n;
	cout<<"Enter number of children of "<<rootData<<endl;
	cin>>n;
	for(int i = 0; i <n ; i++){ 
		TreeNode<int>* c = takeInputRecursive();
		root->children.push_back(c);
	}
	return root;
}

TreeNode<int>* takeInputLevelWise(){

	int rootData;
	cout<<"Enter Data"<<endl;
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;

	pendingNodes.push(root);

	while(pendingNodes.size()!=0){

		TreeNode<int>* front = pendingNodes.front();

		pendingNodes.pop();

		cout<<"Enter number of children of "<<front->data<<endl;
		int numChild;
		cin>>numChild;

		for(int i = 0; i <numChild ; i++){ 

			int childData;
			cout<<"Enter "<<i<<" th child of "<< front->data<< endl;
			cin>>childData;

			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

void printTreeNode(TreeNode<int>* root){
	if (root == NULL){
		return;
	}

	cout<<root->data <<" : ";
	for(int i = 0; i <root->children.size() ; i++){ 
		cout<<root->children[i]->data<<" , ";
	}
	cout<<endl;
	for(int i = 0; i <root->children.size() ; i++){ 
		printTreeNode(root->children[i]);
	}
}

 int main(){
 /*
 	TreeNode<int>* root = new TreeNode<int>(1);
 	TreeNode<int>* node1 = new TreeNode<int>(2);
 	TreeNode<int>* node2 = new TreeNode<int>(3);

 	root->child.push_back(node1);
 	root->child.push_back(node2);
*/

 	TreeNode<int>* root = takeInputLevelWise();
 	printTreeNode(root);
 	return 0;
 }