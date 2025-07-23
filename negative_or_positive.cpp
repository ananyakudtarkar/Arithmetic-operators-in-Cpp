// ARITHMETIC OPERATORS

// Checking if negative or positive
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cout<<"Enter any integer: ";
	cin>>a;
	if (a<0){
	cout<<"Integer = "<<a<<" is negative.";
	}
	else if (a>0){
    	cout<<"Integer = "<<a<<" is positive.";
	}
	else {
    	cout<<"The number is zero.";
	}
	return 0;
}

/*
OUTPUT:
Enter any integer: -1
Integer = -1 is negative.
*/

