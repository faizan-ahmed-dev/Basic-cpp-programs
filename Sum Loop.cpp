/*Q12.
Write a program that prints the sum of the first n natural numbers. */

#include <iostream>
using namespace std;

int main() {
	int number;
	int sum = 0;
	cout << "Enter a number: ";
	cin >> number;
	
	for(int i = 1; i <= number; i++) {
		sum += i;
	}
	
	 cout << "The sum of first " << number << " natural numbers is: " << sum << endl;
	 
	 return 0;
	
	
}
