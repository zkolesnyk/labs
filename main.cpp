#include "header.h"
using namespace std;
//#include <conio.h> //Выключить, если работаем под Unix

/*void cls() { //Функция очистки экрана
	system("cls");
*/

int main() {
	while (true) {
		spacer();
		cout << "\nLab`s available:1, 2, 3, 4, 8";
		cout << "\nEnter the number of lab or 0 to exit the program: ";
		int x = checkString();

		switch (x) {
			case 0: 
				return 0;
				break;
			case 1: 
				l1();
				break;
			case 2:
				l2();
				break;
			case 3:
				l3();
				break;
			case 4:
                l4();
				break;
            case 8:
                l8();
                break;
			default:
				spacer();
				cout << "I`m sorry, but this lab is not available. Try again." << endl;
				break;
		}
	}
	return 0;
}
