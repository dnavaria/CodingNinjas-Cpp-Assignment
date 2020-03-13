/*
Bubble Sort (Iterative) LinkedList

Sort a given linked list using Bubble Sort (iteratively). While sorting, you need to swap the entire nodes, not just the data.
You don't need to print the elements, just sort the elements and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 4 5 2 -1
Sample Output 1 :
1 2 4 5
*/


int length(node *head) {
  node *t=head;
  int count=0;
  while(t){
    count+=1;
    t = t->next;
  }
    return count;
}


node* swap_nodes(node *head,int i,int j)
{
    node *t1 = head;
    node *t2 = head;
    while(i>0){
    	t1 = t1 ->next;
    	i--;
    }
    while(j>0){
    	t2 = t2 ->next;
    	j--;
    }
    int d = t1->data;
    t1->data = t2->data;
    t2->data = d ;
return head;
}

void swap(node *a,node *b){
	int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
}

node* bubble_sort_LinkedList_itr(node* head)
{
   int n = length(head);
   int swapped,i;
   node *p1,*p2=NULL;

   if(head == NULL){
   	return head;
   }

   do{
   	swapped = 0;
   	p1 = head;
   	while(p1->next!=p2){
   		if(p1->data>p1->next->data){
   			swap(p1,p1->next);
   			swapped=1;
   		}
   		p1 = p1->next;
   	}
   	p2 = p1;
   }while(swapped);
   return head;
}
