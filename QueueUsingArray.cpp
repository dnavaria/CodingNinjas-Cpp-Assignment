/*
	Queue using Array
*/

#include <iostream> 
using namespace std;


template <typename T>
class QueueUsingArray
{
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capactiy;

public:
	QueueUsingArray(int s){
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capactiy = s;
	}

	int getSize(){
		return size;
	} 

	bool isEmpty(){
		return size==0;
	}
	
	T front(){
		if (isEmpty()){
			cout<<"Queue Empty !"<<endl;
			return 0;
		}
		return data[firstIndex];
	}

	void enqueue(T element){
		if (size==capactiy){
			cout<<"Queue Full"<<endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex+1)%capactiy;
		if (firstIndex == -1)
		{
			firstIndex = 0;
		}
		size++;
	}
	
	T dequeue(){
		if (isEmpty()){
			cout<<"Queue Empty !"<<endl;
			return 0;
		}

		T ans = data[firstIndex];
		firstIndex = (firstIndex+1)%capactiy;
		size--;
		if(size == 0){
			firstIndex =-1;
			nextIndex = 0;
		}
		return ans;
	}
};