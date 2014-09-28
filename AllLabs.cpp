#include <iostream>
#include <string>
//#include <conio.h> //Выключить, если работаем под Unix
using namespace std;

int checkString(){ //Функция проверки на ввод букв
	int number;
		string clearString;
		while (!(cin >> number)) {	
			cin.clear();
			cin >> clearString;
			cout << "Incorrect number! Try again: ";
		}
	return number;
}

/*void cls() { //Функция очистки экрана
	system("cls");
}*/

void spacer(){ //Spacer
	int n;
	for (n=1; n<=80; n++)
	cout << "-";
}

void l1() {
	float a, b, min, max;

//	cls(); //Вызов функции очистки экрана

	spacer();
	cout << "Lab #1" << endl;
	spacer();

	cout << "Enter two numbers:\n";
	a=checkString();
	b=checkString();

	min = (a<b) ? a:b;						
	max = (a>b) ? a:b;

	b = min*max*2;
	a = (min + max)/2;

	cout << endl;
	cout << "(" << min << "+" << max << ")/2=" << a << endl;
	cout << min << "*" << max << "*" << 2 << "=" << b;

	cout << "\n\nThe end." << endl;
}

void l2() {
	float a, b, max, min;

//	cls(); //Вызов функции очистки экрана

	spacer();
	cout << "Lab #2" << endl;
	spacer();

	while (true) {
			cout << "Vvedite 2 raznyh po znaku chisla: ";
			a = checkString();
			b = checkString();

			min = (a<b) ? a:b;
			max = (a>b) ? a:b;

			if ((a<0 && b<0)||(a>0 && b>0)){	
				cout<<"Vy vveli 2 odinakovyh po znaku chisla."<<endl;
				spacer();
			} 
			else {
				spacer();
				max = max*3;
				min = min*min;

				cout << "Max*3 = " << max << endl << "Min^2 = " << min;

				cout << "\n\nThe end." << endl;
				break;
			}
	}
}

int main() {
	while (true) {
		spacer();
		cout << "Lab`s available: 1, 2";
		cout << "\nEnter the number of lab or 0 to exit the program: ";
		int x = checkString();
		if (x==0) return 0;

		switch (x) {
			case 1: 
				l1();
				break;
			case 2:
				l2();
				break; 
			default: 
				spacer();
				cout << "I`m sorry, but this lab is not available. Try again." << endl;
				break;
		}
	}
	return 0;
}
