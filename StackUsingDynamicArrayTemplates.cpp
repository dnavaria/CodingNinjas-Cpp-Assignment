/*
	Stack using dynamic array with templates
*/
#include <climits>
#include <iostream>

using namespace std;

template <typename T>
class StackUsingDynamicArray
{
	T *data;
	int nextIndex;
	int capacity;
public:
	StackUsingDynamicArray(){
		data = new T[4 ];
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
			T *newData = new T[2*capacity];
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

	T pop(){
		
		if (isEmpty() )
		{
			cout<<"Stack is empty"<<endl;
			return 0;
		}
		nextIndex--;
		return data[nextIndex];
	}

	T top(){
		if (isEmpty() )
		{
			cout<<"Stack is empty"<<endl;
			return 0;
		}
		return data[nextIndex-1];
	}
	
	
};