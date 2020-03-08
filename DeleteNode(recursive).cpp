/*
Delete node (recursive)

Given a linked list and a position i, delete the node of ith position from Linked List recursively.
If position i is greater than length of LL, then you should return the same LL without any change.
Indexing starts from 0. You don't need to print the elements, just delete the node and return the head of updated LL.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer i (position)
Output format :
Updated LL elements (separated by space)
Sample Input 1 :
3 4 5 2 6 1 9 -1
3
Sample Output 1 :
3 4 5 6 1 9
Sample Input 2 :
3 4 5 2 6 1 9 -1
0
Sample Output 2 :
4 5 2 6 1 9
*/
Node* deleteNodeRec(Node *head, int i) {
    
    if (head == NULL)
    {
        return head;
    }
    if (i == 0)
    {
      Node *t;
      t = head;
      delete t;
      head = head->next;
      return head;
    }
	head ->next = deleteNodeRec(head->next,i-1);
    return head;
}


