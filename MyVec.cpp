#include "MyVec.h"

template<class T>
MyVec<T>::MyVec(){
	this-> size = 3;
}


template<class T>
MyVec<T>::MyVec(int size = 1){
	this->size = size;
}


template<class T>
MyVec<T>::~MyVec(){
	//do nothing
}

template<class T>
void MyVec<T>::show(){
	cout << "size: " << size << endl;
}

// Method 1 - in resolving template linking error
// No need to call this TemporaryFunction() function,
// it's just to avoid link error when using template
/*
void TemporaryFunction ()
{
	//just make sure this constructor exist too
    MyVec<int> TempObj;
}
*/
