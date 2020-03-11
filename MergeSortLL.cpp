/*
Code: Merge Sort

Sort a given linked list using Merge Sort.
You don't need to print the elements, just sort the elements and return the head of updated LL.
Input format :
Linked list elements (separated by space and terminated by -1)
Output format :
Updated LL elements (separated by space)
Constraints :
1 <= Length of LL <= 1000
Sample Input 1 :
1 4 5 2 -1
Sample Output 1 :
1 2 4 5
*/


node* midpoint_linkedlist(node *head)
{
	if(head == NULL ){
		return head;
	}
  node *p = head;
  node *q = head;
  while( q->next!=NULL && q->next->next!=NULL){
	p = p->next;
    q = q->next->next;
  }
  return p;
}

node* mergeTwoLLs(node *head1, node *head2) {
	if(head1 == NULL){
		return head2;
	}if(head2==NULL){
		return head1;
	}
	node *fh=NULL,*ft=NULL;
	if(head1->data < head2->data){
			fh = head1;
			ft=head1;
			head1=head1->next;
		}else{
			fh = head2;
			ft=head2;
			head2=head2->next;
		}
	while(head1!=NULL && head2!=NULL){
		if(head1->data < head2->data){
			ft->next = head1;
			ft=head1;
			head1=head1->next;
		}else{
			
			ft->next = head2;
			ft=head2;
			head2=head2->next;
		}
	}
	if (head1!=NULL){
		ft->next = head1;
	}
	if (head2!=NULL){
		ft->next = head2;
	}
return fh;
}


node* mergeSort(node *head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    node *mp = midpoint_linkedlist(head);
    node *h1 = head;
    node *h2 = mp->next;
    mp->next = NULL;
    h1 = mergeSort(h1);
    h2 = mergeSort(h2);
    node *finalLL =  mergeTwoLLs(h1,h2);
    return finalLL;
}


