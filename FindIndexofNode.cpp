/*
Find a node in LL
Send Feedback
Given a linked list and an integer n you need to find and return index where n is present in the LL. Do this iteratively.
Return -1 if n is not present in the LL.
Indexing of nodes starts from 0.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer n 
Output format :
Index
Sample Input 1 :
3 4 5 2 6 1 9 -1
5
Sample Output 1 :
2
Sample Input 2 :
3 4 5 2 6 1 9 -1
6
Sample Output 2 :
4
*/


int indexOfNIter(Node *head, int n) {
    
  Node *p=head;

  int c = 0;
    while(p){
      if(p->data == n){
        return c;
      }
      c=c+1;
      p=p->next;
    }
    
  

    return -1;
}


