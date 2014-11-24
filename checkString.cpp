#include "header.h"
#include <string>
using namespace std;

int checkString() { //Функция проверки на ввод букв
	int number;
		string clearString;
		while (!(cin >> number)) {	
			cin.clear();
			cin >> clearString;
			cout << "Incorrect number! Try again: ";
		}
	return number;
}
