/*
Eliminate duplicates from LL
Send Feedback
Given a sorted linked list (elements are sorted in ascending order). Eliminate duplicates from the given LL, such that output LL contains only unique elements.
You don't need to print the elements, just remove duplicates and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)

Sample Input 1 :
1 2 3 3 3 4 4 5 5 5 7 -1
Sample Output 1 :
1 2 3 4 5 7
*/

node* eliminate_duplicate(node* head)
{
	node *p = head;
	node *q = p->next;
	while(p->next!=NULL){
		if(p->data == q->data){
			q = q->next;
			p->next=q;

		}else{
			q = q->next;
			p = p->next;	
		}
		
	}
	return head;   
}
