/*
Code : Reverse LL 
Send Feedback
Given a linked list, reverse it.
You don't need to print the elements, just reverse the LL duplicates and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
5 4 3 2 1
*/

//Double node - solution

class Pair{
	public:
		node *head;
		node *tail;
};

Pair reverse_linked_list_rec2(node *head){
	if(head->next == NULL || head == NULL ){
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}

	Pair smallAns = reverse_linked_list_rec2(head->next);
	smallAns.tail->next = head;
	head->next = NULL;
	Pair ans;
	ans.head = smallAns.head;
	ans.tail = head;
	return ans;
}

node * reverseLL(node *head){
	return reverse_linked_list_rec2(head).head;
}


//Recursive solution - O(n)
node *reverse_linked_list_rec(node *head)
{
    if(head->next == NULL || head == NULL){
    	return head;
    }
    node *ptr = reverse_linked_list_rec(head->next);
    head -> next -> next = head;
    head->next = NULL;
    return ptr;   
}

// Iterative Solution
node* rev_linkedlist_itr(node* head)
{
    
  node* prev = NULL;
  node* next_node = NULL;
  
  while(head){
    next_node = head->next;
    head->next = prev;
    prev = head;
    head = next_node;
  }
  return prev;
}

