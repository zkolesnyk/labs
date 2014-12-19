#include "header.h"
using namespace std;

void l3() {
    long long int number;

	spacer();
	cout << "\nLab #3" << endl;
	spacer();

	cout<<"\nEnter the number: ";
	cin>>number;
	cout<<"The sum of digits equal to: "<<digitSum(number)<<endl;
    
	cout << "\n\nThe end." << endl;	
	quit();
}

int digitSum(long long int number) {
    if (number!=0) return number%10 + digitSum(number/10);
    else return 0;
}