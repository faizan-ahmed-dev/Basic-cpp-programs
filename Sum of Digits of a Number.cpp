#include <iostream>
using namespace std;

int digitSum(int number) {
	int original = number;  //Keeps the original number in a separate variable.
	int sum = 0; 
	
	while( number>0) {
	sum += number %10;  // Adds the last digit to the variable 'sum'.
	number = number/10;  // Removes the last digits of the actual number.
	}
	return sum;
}
int main() {
	int number, sum;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Sum of digits: " << digitSum(number);
	return 0; 
}
