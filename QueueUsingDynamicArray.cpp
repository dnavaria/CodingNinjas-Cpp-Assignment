/*
	Queue using Dynamic  Array
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
	QueueUsingArray(){
		data = new T[5];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capactiy = 5;
	}

	int getSize(){
		return size;
	} 

	bool isEmpty(){
		return size==0;
	}

	void enqueue(T element){
		if (size==capactiy){
			T *newData = new T[2*capactiy];
			int j=0
			for(int i = firstIndex; i <capactiy; i++){ 
				newData[j] = data[i];
				j++;
			}
			for(int i = 0; i <firstIndex ; i++){ 
				newData[j] = data[i];
				j++; 
			}

			delete [] data;
			data = newData;
			firstIndex = 0;
			nextIndex = capactiy;
			capactiy=*2;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex+1)%capactiy;
		if (firstIndex == -1){
			firstIndex = 0;
		}
		size++;
	}

	T front(){
		if (isEmpty()){
			cout<<"Queue Empty !"<<endl;
			return 0;
		}
		return data[firstIndex];
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