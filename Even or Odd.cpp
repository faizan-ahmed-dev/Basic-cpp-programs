/* A number is even if divisible by 2, otherwise odd.
Write a program that prints whether a given number is even or odd. */

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	if (n % 2 == 0)
		cout << "The number is even." << endl;
	else
		cout << "The number is odd." << endl;
		
	return 0;
	
}
