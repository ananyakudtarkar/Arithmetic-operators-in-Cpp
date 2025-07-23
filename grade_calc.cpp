// Grade Calc
#include <iostream>
#include <string>
using namespace std;

int main() {
	int m1, m2, m3, m4, m5;
	cout<<"Enter marks for subject 1: ";
	cin>>m1;
	cout<<"Enter marks for subject 2: ";
	cin>>m2;
	cout<<"Enter marks for subject 3: ";
	cin>>m3;
	cout<<"Enter marks for subject 4: ";
	cin>>m4;
	cout<<"Enter marks for subject 5: ";
	cin>>m5;
	float avg = (m1+m2+m3+m4+m5)/5;
    
	if (avg>=90){
    	cout<<"Grade: O";
	}
	else if (avg>=80 && avg<90){
    	cout<<"Grade: A+";
	}
	else if (avg>=70 && avg<80){
    	cout<<"Grade: A";
	}
	else if (avg>=60 && avg<70){
    	cout<<"Grade: B";
	}
	else if (avg>=50 && avg<60){
    	cout<<"Grade: C";
	}
	else if (avg>=40 && avg<50){
    	cout<<"Grade: D";
	}
	else{
    	cout<<"Grade: Fail";
	}
}

/*
OUTPUT:
Enter marks for subject 1: 80
Enter marks for subject 2: 60
Enter marks for subject 3: 70
Enter marks for subject 4: 89
Enter marks for subject 5: 99
Grade: A
*/
