/*
	Stack using Array
*/

#include <climits>
#include <iostream>

using namespace std;

class StackUsingArray
{
	int *data;
	int nextIndex;
	int capacity;
public:
	StackUsingArray(int n){
		data = new int[n];
		nextIndex = 0;
		capacity = n;
	}

	int size(){
		return nextIndex;
	}

	bool isEmpty(){
		return nextIndex == 0;
	}

	void push(int value){
		if(nextIndex == capacity){
			cout<<"Stack full"<<endl;
			return;
		}
		data[nextIndex] = value;
		nextIndex++;
	}

	int pop(){
		
		if (isEmpty() )
		{
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}

	int top(){
		if (isEmpty() )
		{
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
		return data[nextIndex-1];
	}
	
};



