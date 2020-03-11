/*
Even after Odd LinkedList

Arrange elements in a given Linked List such that, all even numbers are placed after odd numbers. Respective order of elements should remain same.
Note: Input and Output has already managed for you. You don't need to print the elements, instead return the head of updated LL.
Input format:
Linked list elements (separated by space and terminated by -1)
Output format:
Print the elements of updated Linked list. 
Sample Input 1 :
1 4 5 2 -1
Sample Output 1 :
1 5 4 2 
Sample Input 2 :
1 11 3 6 8 0 9 -1
Sample Output 2 :
1 11 3 9 6 8 0
*/


node* arrange_LinkedList(node* head)
{
	if(head == NULL || head->next == NULL){
		return head;
	}
    node *odd = NULL;
    node *oddHead = NULL;
    node *evenHead = NULL;
    node *even = NULL;
    node *iter = head;
 

    while(iter!=NULL){
    	if(iter->data % 2 != 0){
    		if(oddHead==NULL){
    			odd = iter;
                oddHead = odd;
    		}else{
    			odd->next = iter;
    			odd = odd->next;	
    		}
    	}
    	else{
    		if(evenHead==NULL){
    			even = iter;
                evenHead = even;
    		}else{
    			even->next = iter;
    			even = even->next;	
    		}
    	}
    	iter = iter->next;
    }
    

    if(odd==NULL ){
    	if (evenHead!=NULL)
    	{
    		oddHead = evenHead;
    		even->next = NULL;
    	}
    		
    }else{
    	if (evenHead!=NULL)
    	{
    		odd->next = evenHead;	
    		even->next = NULL;
    	}else{
    		odd->next = NULL;
    	}
    }
    return oddHead;
}
