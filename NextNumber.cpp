/*
Next Number

Given a large number represented in the form of a linked list. Write code to increment the number by 1 in-place(i.e. without using extra space).
Note: You don't need to print the elements, just update the elements and return the head of updated LL.
Input Constraints:
1 <= Length of Linked List <=10^6.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Output Format :
Line 1: Updated linked list elements 
Sample Input 1 :
3 9 2 5 -1
Sample Output 1 :
3 9 2 6
Sample Input 2 :
9 9 9 -1
Sample Output 1 :
1 0 0 0 
*/

#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};



int length(Node *head) {
  Node *t=head;
  int count=0;
  while(t){
    count+=1;
    t = t->next;
  }
    return count;
}

Node* helper(Node *head,int place) {
    Node *temp = head;
	
	if(place == 0){
        Node *newNode = new Node(1);
        newNode->next = temp;
        head = newNode;
	}    
	else if(place >0){
        int count = 1;
		while( count < place){
			temp = temp->next;
            count++;
		}

		if(temp->data < 9){
			temp->data = temp->data + 1;
			return head;
		}else if(temp->data == 9){
			temp->data = 0;
            
			head = helper(head,place-1);
		}
	}

	return head;
}



Node* NextLargeNumber(Node *head) {
	if(head==NULL){
		return head;
	}
	int len = length(head);
	return helper(head,len);
}



Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();
    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}

