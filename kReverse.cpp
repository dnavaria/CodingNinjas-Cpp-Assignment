/*
kReverse

Implement kReverse( int k ) in a linked list i.e. you need to reverse first K elements then reverse next k elements and join the linked list and so on.
Indexing starts from 0. If less than k elements left in the last, you need to reverse them as well. If k is greater than length of LL, reverse the complete LL.
You don't need to print the elements, just return the head of updated LL.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : k

Sample Input 1 :
1 2 3 4 5 6 7 8 9 10 -1
4
Sample Output 1 :
4 3 2 1 8 7 6 5 10 9
Sample Input 2 :
1 2 3 4 5 -1
2
Sample Output 2 :
2 1 4 3 5 
Sample Input 3 :
1 2 3 4 5 6 7 -1
3
Sample Output 3 :
3 2 1 6 5 4 7
*/




class Pair{
	public:
		node *head;
		node *tail;
};

int length(node *head) {
  node *t=head;
  int count=0;
  while(t){
    count+=1;
    t = t->next;
  }
    return count;
}

Pair reverse(node *head){
	if(head->next == NULL || head == NULL ){
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}

	Pair smallAns = reverse(head->next);
	smallAns.tail->next = head;
	head->next = NULL;
	Pair ans;
	ans.head = smallAns.head;
	ans.tail = head;
	return ans;
}


node* kReverse(node*head,int n)
{
    int len = length(head);
    node *newHead = NULL;
    node *newTail = NULL;
    if(len <= n){
    	return reverse(head).head;
    }else if(n == 1){
        return head;
    }else{
    		node *h1 = head;
    		node *h2 = NULL;
    		node *t1 = head;
    		node *link = NULL;
    		int count = 1;
    		while(t1!=NULL){
				while(count < n && t1!=NULL){
					t1 = t1->next;
					count++;
				}
                
                if(t1!=NULL){
                    h2 = t1->next;     
                    t1 ->next = NULL;
                }else{
                    h2 = NULL;
                }
				

				Pair x = reverse(h1);
				if(link!=NULL){
					link->next = x.head;
				}
				if(newHead == NULL){
					newHead = x.head;
				}

				link = x.tail;
				t1 = x.tail;
				t1->next = h2;
				t1 = t1->next;
				h1 = t1;
				count = 1;
    		}	


    	}
return newHead;
}