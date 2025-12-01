/* Q15
Write a function int square(int n) that returns the square of a number. */

#include <iostream>
using namespace std;

int square(int n) {
	return n * n;
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	int result = square(n);
	cout << "The square is: " << result << endl;
	
	return 0;
}
