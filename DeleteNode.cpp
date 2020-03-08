/*
Delete node

Given a linked list and a position i, delete the node of ith position from Linked List iteratively.
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
    return count-1;
}


Node* deleteNodeAIthPosition(Node *head,int i){
	Node *t = head;
	Node *p;
	if(head == NULL || head->next == NULL || i > length(head)){
        return head;
    }
	if(i == 0){
		head = head->next;
		delete t;
	}

	if(i == length(head)){
		while(t->next->next != NULL){
			t = t->next;
        }
            p = t->next;
            t->next = NULL;
            delete p;
    }
	else{
		int c=0;
		while(t){
			if(c!=i)
				c+=1;
			if(c==i)
				break;
			t = t->next;
        }
        p = t->next;
        t->next = t->next->next;
        delete p;
    }

return head;
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
    int pos;
    cin >> pos;
    head = deleteNode(head, pos);
    print(head);
    return 0;
}

