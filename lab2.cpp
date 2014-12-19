#include "header.h"
using namespace std;

void l2() {
	float a, b, max, min;
    
	spacer();
	cout << "\nLab #2" << endl;
	spacer();

	while (true) {
		cout << "\nVvedite 2 raznyh po znaku chisla: ";
		a = checkString();
		b = checkString();
		min = (a<b) ? a:b;
		max = (a>b) ? a:b;

		if ((a<0 && b<0)||(a>0 && b>0)) {
			cout<<"Vy vveli 2 odinakovyh po znaku chisla."<<endl;
			spacer();
        }
        else {
            spacer();
            max = max*3;
            min = min*min;

            cout << "\nMax*3 = " << max << endl << "Min^2 = " << min;

            cout << "\n\nThe end." << endl;
            quit();
    break;	
			}	
	}
}
