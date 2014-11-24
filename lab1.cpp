#include "header.h"
using namespace std;

void l1() {
	float a, b, min, max;
    
	spacer();
	cout << "Lab #1" << endl;
	spacer();

	cout << "Enter two numbers:\n";
	a = checkString();
	b = checkString();
	min = (a<b) ? a:b;						
	max = (a>b) ? a:b;
	b = min*max*2;
	a = (min + max)/2;

	cout << endl;
	cout << "(" << min << " + " << max << ") / 2 = " << a << endl;
	cout << min << " * " << max << " * " << 2 << " = " << b;

	cout << "\n\nThe end." << endl;
	quit();
}
