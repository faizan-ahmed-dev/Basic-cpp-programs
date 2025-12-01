// Write a program that asks for **three numbers** and prints the **largest** using if/else.

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;
	
	if (a > b && a > c) 
		cout << "The largest number is " << a;
		
	else if (b > a && b > c)
		cout << "The largest number is " << b;
	
	else
	    cout << "The largest number is " << c;
		
	return 0;	
}
