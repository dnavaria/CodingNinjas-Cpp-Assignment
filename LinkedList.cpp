/*
	Linked Lists
*/

#include <iostream> 
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node(int data){
			this->data = data;
			next = NULL;
		}
};

Node* takeInput(){
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data!=-1){
		Node *newNode = new Node(data);
		if(head==NULL){
			head = newNode;
			tail = newNode; 
		}else{
			tail->next = newNode;
			tail = tail->next;
		}
		
		cin>>data;
	}
	return head;
}

void print(Node *head){
	Node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

Node* InsertAtIthPosition(Node *head,int i,int data){
	Node *temp = head;
	Node *newNode = new Node(data);
	int count = 0;
	if(i==0){
		newNode->next = head;
		head = newNode;
		return head;
	}
	while(count < i-1 && temp){
		temp = temp->next;
		count++;
	}
	if(temp!=NULL){
		newNode->next = temp->next;
		temp->next = newNode;

	}
	return head;
} 

int length(Node *head) {
  Node *t=head;
  int count=0;
  while(t){
    count+=1;
    t = t->next;
  }
    return count-1;
}

int main(){
	Node *head = takeInput();
	print(head);
	
	return 0;
}