/*Write a program to calculate the electricity bill as follows:

First 100 units ? Rs. 10/unit

Next 100 units ? Rs. 15/unit

Remaining units ? Rs. 20/unit

Input: units consumed
Output: total bill */

#include <iostream>
using namespace std;

int main() {
	int units, bill;
	cout << "Enter the units consumed: ";
	cin >> units;
	
	if (units <= 100)
		bill = units*10;
		
	else if (units <= 200)
		bill = 100*10 + (units-100)*15;
		
	else
		bill = 100*10 + 100*15 + (units-200)*20;
		
	cout << "Total bill is " << bill << " Rs ";
		
	return 0;
}

