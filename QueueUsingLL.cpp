/*
Code : Queue Using LL

You need to implement a Queue class using linked list.
All the required data members should be private.
Implement the following public functions :
1. Constructor -
Initialises the data members.
2. enqueue :
This function should take one argument of type T and has return type void. This function should insert an element in the queue. Time complexity should be O(1).
3. dequeue :
This function takes no input arguments and has return type T. This should removes the first element which is entered and return that element as an answer. Time complexity should be O(1).
4. front :
This function takes no input arguments and has return type T. This should return the first element which is entered and return that element as an answer. Time complexity should be O(1).
5. size :
Return the size of stack i.e. count of elements which are present ins stack right now. Time complexity should be O(1).
6. isEmpty :
Checks if the queue is empty or not. Return true or false.

*/

#include<iostream>
using namespace std;


template <typename T>
class Node {
    public :
    T data;
    Node<T> *next;
    
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};

class Queue {

	Node<T> *head;
	Node<T> *tail;
	int size;

public :
    
    Queue() {
      head = NULL;
      tail = NULL;
      size = 0;
    }
    
    void enqueue(T data) {
    	size++;
        Node<T> *n = new Node<T>(data);
        if(head==NULL){
        	head = n;
        	tail = n;
        	return;
        }
        tail->next = n;
        tail = n;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    T dequeue() {
        // Return 0 if queue is empty
      if (isEmpty()){
      	return 0;
      }
      T ans = head->data;
      Node<T> *n = head;
      head=head->next;
      delete n;
      size--;
      return ans;
    }
    
    T front()  {
        // Return 0 if queue is empty
      if (isEmpty()){
      	return 0;
      }
      return head->data;
    }
};


int main() {
    
    Queue<int> q;
    
    int choice;
    cin >> choice;
    int input;
    
    while (choice !=-1) {
        if(choice == 1) {
            cin >> input;
            q.enqueue(input);
        }
        else if(choice == 2) {
            int ans = q.dequeue();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 3) {
            int ans = q.front();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 4) {
            cout << q.getSize() << endl;
        }
        else if(choice == 5) {
            cout << q.isEmpty() << endl;
        }
        cin >> choice;
    }
    
}