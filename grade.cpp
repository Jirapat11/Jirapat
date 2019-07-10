#include<iostream>
using namespace std;
void main()
{
	float grade ;
	cout << "Enter your score : ";
	cin >> grade ;
	cout << "Your grade is : ";
	if (grade<=100&&grade>=90){
		cout << "A\n";
	}
	else if (grade<=89&&grade>=80) cout << "B\n";
	else if (grade<=79&&grade>=70) cout << "C\n";
	else if (grade<=69&&grade>=60) cout << "D\n";
	else if (grade<=59&&grade>=0) cout << "F\n";
	else { cout << "ERROR\n" ;
	}
	
}

