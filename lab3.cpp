#include "header.h"
using namespace std;

int digitSum(int x,int number){
	int curr,next,exp;

	exp=pow(10,(double)(x-1));
	if (exp==0) return 0;
	curr=number/exp;
	next=number%exp;

	return curr+digitSum((x-1),next);
}

void l3() {

	spacer();
	cout << "Lab #3" << endl;
	spacer();

	int numberLength,number,digitsSum;

	cout<<"Enter the number: ";
	cin>>number;
	numberLength=length(number);
	
	cout<<"The sum of digits equal to: "<<digitSum(numberLength,number)<<endl;
	cout << "\n\nThe end." << endl;	
	quit();
	
}
