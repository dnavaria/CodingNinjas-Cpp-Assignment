/*
Code: Midpoint of LL

Given a linked list, find and return the midpoint.
If the length of linked list is even, return the first mid point.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
3
Sample Input 2 :
1 2 3 4 -1
Sample Output 2 :
2
*/

// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/

node* midpoint_linkedlist(node *head)
{
  node *t = head;
  int c = 0;
	while(t->next!=NULL){
  	    c+=1;
        t=t->next;
    }
  node *t1 = head;
  c = c/2;
    
  while(t1){
 	if(c==0){
      return t1;
    }
    t1 = t1->next;
    c--;
  }
    /*
  node *p = head;
  node *q = head;
  while(q->next->next!=NULL){
	p = p->next;
    q = q->next->next;
  }
  
  return p;*/
}
