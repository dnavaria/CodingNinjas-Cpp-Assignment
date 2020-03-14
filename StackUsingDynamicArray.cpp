/*
	Stack using dynamic array
*/
#include <climits>
#include <iostream>

using namespace std;
class StackUsingDynamicArray
{
	int *data;
	int nextIndex;
	int capacity;
public:
	StackUsingDynamicArray(){
		data = new int[4 ];
		nextIndex = 0;
		capacity = 4;
	}

	int size(){
		return nextIndex;
	}

	bool isEmpty(){
		return nextIndex == 0;
	}

	void push(int value){  
		if(nextIndex == capacity){
			int *newData = new int[2*capacity];
			for(int j = 0; j <capacity ; j++){ 
				newData[j] = data[j];
			}
			capacity*=2;
			delete [] data;
			data = newData;
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