/*
Print ith node

Given a linked list and a position i, print the node at ith position.
If position i is greater than length of LL, then don't print anything.
Indexing starts from 0.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer i (position)
Output format :
Element at ith position
Sample Input 1 :
3 4 5 2 6 1 9 -1
3
Sample Output 1 :
2
Sample Input 2 :
3 4 5 2 6 1 9 -1
0
Sample Output 2 :
3
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


Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
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
void printIthNode(Node *head, int i) {
    
    Node *temp = head;
    int c = 0;
    while(temp->next && c != i){
    	temp = temp->next;
    	c++;
    }
    if(i<=c){
        cout<<temp->data;    
    }
}


int main() {
    Node *head = takeinput();
    int pos;
    cin >> pos;
    printIthNode(head, pos);
    return 0;
}

