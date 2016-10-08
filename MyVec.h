#ifndef MYVEC_H
#define MYVEC_H

#include <iostream>
#include <string>

using namespace std;

template<class T>
class MyVec{

public:
	int size;
	//T* arr;

	MyVec();
	MyVec(int size);

	~MyVec();

	void show();

};

//Method 3 - to avoid linking template error
//#include "MyVec.cpp"

#endif