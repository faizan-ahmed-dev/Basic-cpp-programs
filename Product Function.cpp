/* Q16
Write a program using a function that takes two integers and returns their product. */

#include <iostream>
using namespace std;

int product(int a, int b) {
	return a *b;
}

int main() {
	int a, b;
	cout << "Enter two  numbers: ";
	cin >> a >> b;
	
	cout << "The product is: " << product(a, b);
	
	return 0;
}
