/*
Swap two Node of LL

Given a linked list, i & j, swap the nodes that are present at i & j position in the LL. You need to swap the entire nodes, not just the data.
Indexing starts from 0. You don't need to print the elements, just swap and return the head of updated LL.
Assume i & j given will be within limits. And i can be greater than j also.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : i and j (separated by space)

Sample Input 1 :
3 4 5 2 6 1 9 -1
3 4
Sample Output 1 :
3 4 5 6 2 1 9
Sample Input 2 :
3 4 5 2 6 1 9 -1
2 4
Sample Output 2 :
3 4 6 2 5 1 9
*/

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
