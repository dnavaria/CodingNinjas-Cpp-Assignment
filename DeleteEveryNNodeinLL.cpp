/*
Delete every N nodes

Given a linked list and two integers M and N. Traverse the linked list such that you retain M nodes then delete next N nodes, continue the same until end of the linked list. That is, in the given linked list you need to delete N nodes after every M nodes.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : M

Line 3 : N

Sample Input 1 :
1 2 3 4 5 6 7 8 -1
2
2
Sample Output 1 :
1 2 5 6
Sample Input 2 :
1 2 3 4 5 6 7 8 -1
2
3
Sample Output 2 :
1 2 6 7
*/


node* skipMdeleteN(node  *head, int r, int d) {
    	if(r==0){
            return NULL;
        }else if(d==0 && r>0){
            return head;
        }
    
    if(r>0 && d>0){
    	int count = 1;
    	
        node *t1 = head;
        node *t2 = head;
    	while(t1!=NULL){
           for(count = 1; count<r && t1!=NULL; count++){
               t1 = t1->next;
           }
	        if(t1 == NULL){
                return head;
            }
            t2 = t1->next;
            for(count=1;count<=d&&t2!=NULL;count++){
                node *temp = t2;
                t2 = t2 ->next;
                delete temp;
            }
            t1->next = t2;
            t1 = t2;
        }
    }

return head;
}
