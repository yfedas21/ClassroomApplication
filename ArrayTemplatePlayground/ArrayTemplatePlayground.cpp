#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string> 
using namespace std;

void displayVectorElements(vector<int> intVec);

template<typename T>
void getMax(T val1, T val2) {
	if (val1 > val2) {
		cout << val1 << " is the greater of the two.\n";
	}
	else
		cout << val2 << " is the greater of the two.\n";
}

void displayVectorElements(vector<int> intVec) {
	for (unsigned i = 0; i < intVec.size(); i++) {
		cout << "element[" << i << "]: " << intVec.at(i) << endl;
	}
}

int main()
{
	/*int val1 = 10, val2 = 7;
	double val3 = 3.14, val4 = 3.24;
	string val5 = "Deer Park", val6 = "Moses Lake";*/
	
	vector<int> intVec;
	intVec.push_back(1);
	intVec.push_back(2);
	intVec.push_back(3);
	intVec.push_back(4);
	intVec.push_back(5);

	displayVectorElements(intVec);

	return 0;
}

