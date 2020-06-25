/*
Dequeue

You need to implement a class for Dequeue i.e. for double ended queue. In this queue, elements can be inserted and deleted from both the ends.
You don't need to double the capacity.
You need to implement the following functions -
1. constructor
You need to create the appropriate constructor. Size for the queue passed is 10.
2. insertFront -
This function takes an element as input and insert the element at the front of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
3. insertRear -
This function takes an element as input and insert the element at the end of queue. Insert the element only if queue is not full. And if queue is full, print -1 and return.
4. deleteFront -
This function removes an element from the front of queue. Print -1 if queue is empty.
5. deleteRear -
This function removes an element from the end of queue. Print -1 if queue is empty.
6. getFront -
Returns the element which is at front of the queue. Return -1 if queue is empty.
7. getRear -
Returns the element which is at end of the queue. Return -1 if queue is empty.

*/
#include <iostream> 
using namespace std;


template <typename T>

class Deque {

    T *data;
    int front;
    int rear;
	int size;
	int capacity;

public:

	Deque(int capacity){
		data = new T[capacity];
		size = 0;
		front = -1;
		rear = 0;
		this->capactiy = capacity; 
	}

	int getSize(){
		return size;
	} 

	bool isEmpty(){
		return size==0;
	}

	T getFront(){
		if (isEmpty()){
			return -1;
		}
		return data[front];
	}

	T getRear(){
		if (isEmpty()){
			return -1;
		}
		return data[rear];
	}

	void insertFront(T element){
		if(size == capacity){
			cout<<"-1"<<endl;
			return;
		}
		if(front == -1){
			front = 0;
			rear = 0;
		}else if(front == 0){
			front = capacity -1;
		}else {
			front = capacity -1;
		}
		data[front] = element;
		size++;
	}

	void insertRear(T element){
		if(size == capacity){
			cout<<"-1"<<endl;
			return;
		}
		if(front == -1){
			front = 0;
			rear = 0;
		}else if(rear = capacity -1){
			rear = 0;
		}else{
			rear = rear +1;
		}
		data[rear] = element;
		size++;
	}

	void deleteFront(){
		if (isEmpty()){
			cout<<"-1"<<endl;
			return;	
		}
		if(front == rear){
			front = -1;
			rear = -1;
		}else{
			if(front == capacity-1){
				front = 0;
			}else{
				front = front+1;
			}
		}
		
		size--;
		
	}
	
	void deleteRear(){
		if (isEmpty()){
			cout<<"-1"<<endl;
			return;	
		}
		if(front == rear){
			front = -1;
			rear = -1;
		}else if(rear == 0){
			rear = size -1;
		}else{
			rear = rear-1;
		}
		size--;	
	}

};




/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/

