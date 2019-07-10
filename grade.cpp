#include<iostream>
using namespace std;
void main()
{
	float grade ;
	cout << "Enter your score : ";
	cin >> grade ;
	cout << "Your grade is : ";
	if (grade>=80){
		cout << "A\n";
	}
	else if (grade>=70) cout << "B\n";
	else if (grade>=60) cout << "C\n";
	else if (grade>=50) cout << "D\n";
	else {
		cout << "F\n";
	}
}

