#include "header.h"
#include <pthread.h>
using namespace std;

int quit(){	
	string number;
	cout<<"Exit or continue? Enter 'exit'/'continue' ('e'/'c'): ";
	while (number!="y" && number!="n"){
		cin>>number;
		if (number=="e"||number=="exit") pthread_exit(0); 
		if (number=="c"||number=="continue") return 0;
		cout<<"Incorrect! Try again: ";
	}

}

