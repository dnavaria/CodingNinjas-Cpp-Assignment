/*
Code : Find height

Given a generic tree, find and return the height of given tree.
Input format :
Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Height
Sample Input :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output :
3
*/

int height(TreeNode<int>* root) {
    if(root == NULL){
      return 0;
    }
	
 int maxHeight = 0;
  for(int i = 0;i<root->children.size();i++){
 	int smallHeight = height(root->children[i]);
    if(smallHeight>maxHeight){
      maxHeight = smallHeight;
    }
  }

  	return maxHeight+1;
}

