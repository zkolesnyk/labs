#include "header.h"
using namespace std;

void l4() {

	spacer();
	cout << "Lab #4" << endl;
	spacer();

	int n;

	cout << "Enter the integer value: ";
	n=checkString();
	int* mass = new int[n];

	for (int i=0; i < n; i++) {

		cout << "Enter #"<<(i+1)<<": "; 
		mass[i]=checkString();
	}
	
	int min = mass[0];
	long mult = 1;

	for (int i=0; i < n; i++) {
		if (mass[i] < min) min = mass[i];
		if (mass[i] > 0) mult = mass[i] * mult;
	}

	cout << "\nMinimal element of massive: " << min << endl;	
	cout << "Multiplication of unsigned elements of massive: " << mult << endl;

	delete[] mass;

	cout << "\n\nThe end." << endl;	
	quit();

}
