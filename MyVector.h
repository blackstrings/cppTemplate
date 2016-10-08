#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <string>

using namespace std;

template<class T>
class MyVector{

public:
	int counter;
	int capacity;
	T* arrPtr;

	MyVector(int size = 1){
		counter = 0;
		this->capacity = size;
		arrPtr = new T[size];

		//once you assign an array you can't re assign
		/*
		for(int i=0; i<size; i++){
			push(0);
		}
		*/
	}

	void push(int n){
		if(counter < capacity){
			arrPtr[counter] = n;
			counter++;
		}
	}

	void pop(){
		arrPtr[counter-1] = 0;
		counter--;
	}

	void show(){
		for(int i = 0; i<counter; i++){
			cout << arrPtr[i] << ", ";
		}
		cout << endl;
		cout << "Capacity: " << capacity << endl;
		cout << "Current Size: " << counter << endl;
	}


	~MyVector(){
		//something
		delete arrPtr;
	}

};

#endif