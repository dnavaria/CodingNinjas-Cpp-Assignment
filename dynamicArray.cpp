/*
	Dynamic Array
*/

#include <iostream> 
using namespace std;

class dynamicArray
{
	int *data;
	int nextIndex;
	int capacity;

public:
	dynamicArray(){
		data = new int[5];
		nextIndex = 0;
		capacity = 5;
	}

	dynamicArray(dynamicArray const &d){
		this->data = new int[d.capacity];
		for(int i = 0; i <d.nextIndex ; i++){ 
			this->data[i] = d.data[i];
		}
		this->nextIndex = d.nextIndex;
		this->capacity = d.capacity; 
	}

	void operator=(){
		this->data = new int[d.capacity];
		for(int i = 0; i <d.nextIndex ; i++){ 
			this->data[i] = d.data[i];
		}	
		this->nextIndex = d.nextIndex;
		this->capacity = d.capacity;
	}
	void add(int element){
		if(nextIndex == capacity){
			int *newData = new int[2*capacity];
			for(int i = 0; i <capacity ; i++){ 
				newData[i] = data[i];
			}
			delete [] data;
			data = newData;
			capacity = 2*capacity;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	int get(int i)const{
		if(i<nextIndex){
			return data[i];
		}else{
			return -1;			
		}
	}

	void add(int i,int element){
		if(i<nextIndex){
			data[i]=element;
		}
		else if(i == nextIndex){
			add(element);
		}
		else{
			return;
		}
	}
	void print()const{
		for(int i = 0; i <nextIndex ; i++){ 
			cout<<data[i]<<" ";
		}
		cout<<endl;
	}
	
};


int main(){
	dynamicArray d1;
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);
	d1.print();
	return 0;
}