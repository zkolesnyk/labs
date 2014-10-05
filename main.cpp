#include "header.h"
using namespace std;
//#include <conio.h> //Выключить, если работаем под Unix

/*void cls() { //Функция очистки экрана
	system("cls");
*/

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
