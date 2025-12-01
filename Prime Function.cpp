/* Q17.
Write a function that takes an integer and returns true if it is prime, false otherwise.
(Use loops) */

#include <iostream>
using namespace std;

bool prime(int n) {
	if (n < 2)
		return false;
		
	for(int i = 2; i*i <= n; i++) {
		if (n % i == 0)
			return false;
	}	
	return true; 
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	if (prime(n))
		cout << n << " is prime.";
	else
		cout << n << " is not prime.";
	
	return 0;
}
