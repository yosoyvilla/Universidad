//============================================================================
// Name        : FirstClass.cpp
// Author      : David Villa
// Version     :
// Copyright   : Its Free, without Copyright
// Description : First Class Lesson
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Por favor escriba su nombre:" << endl;
	string username;
	getline(cin, username);
	cout << "BIENVENIDO " + username + " AL PCJIC 2018-II" << endl;
	return 0;
}
