/*
Second Largest Element In Tree

Given a generic tree, find and return the node with second largest value in given tree. Return NULL if no node with required value is present.
Input format :
Line 1 : Elements in level order form separated by space (as per done in class). Order is -
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Second Largest node data
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
40
*/
#include <climits>
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
    
};



TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    
    queue<TreeNode<int>*> pendingNodes;
    
    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}



TreeNode<int>* helper(TreeNode<int> *root,TreeNode<int> *smax,TreeNode<int> *max){
	
 	if(root->children.size() == 0){
 		if (root->data > max->data)
 		{
 			smax->data = max->data;
 			max->data = root->data;
 			return smax;

 		}else{
 			return smax;
 		}
 	}


 	for(int i = 0; i <root->children.size() ; i++){ 
 		if (root->data > max->data)
 		{
 			smax->data = max->data;
 			max->data = root->data;
 			
 		}
 		helper(root->children[i],smax,max);
 	}
 	
return smax;
}


TreeNode <int>* secondLargest(TreeNode<int> *root) {
	if(root==NULL){
 		return root;
 	}

 	TreeNode<int> *smax = new TreeNode<int>(INT_MIN);
 	TreeNode<int> *max = new TreeNode<int>(INT_MIN);
 
 	return helper(root,smax,max);
}


int main() {
    TreeNode<int>* root = takeInputLevelWise();
    TreeNode<int>* ans = secondLargest(root);
    if(ans == NULL) {
        cout << INT_MIN << endl;
    }
    else {
        cout << ans -> data << endl;
    }
}