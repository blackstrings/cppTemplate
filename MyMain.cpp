#include <iostream>
#include <string>
#include "MyVector.h"
#include "MyVec.h"
//Method 2 - to avoid linking error for template class - probably the best method
#include "MyVec.cpp"

using namespace std;


int main(){

	//you have to use typedef to instantiate template classes
	//typedef MyVec<int> IntMyVec;
	MyVec<string> ve(5);
	ve.show();


	MyVector<int> vec(3);
	vec.push(22);
	vec.push(23);
	vec.push(24);
	vec.pop();


	vec.show();

	//cout << "hello " << vec.name << " : " << vec.id << endl;


	system("pause");

	return 0;
}

