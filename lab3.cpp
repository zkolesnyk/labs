#include "header.h"
using namespace std;
	
int digitSum(long long int number) {
if (number!=0) return number%10 + digitSum(number/10);
else return 0;
}

void l3() {

	spacer();
	cout << "Lab #3" << endl;
	spacer();

	long long int number;

	cout<<"Enter the number: ";
	cin>>number;
	
	cout<<"The sum of digits equal to: "<<digitSum(number)<<endl;
	cout << "\n\nThe end." << endl;	
	quit();
	
}
