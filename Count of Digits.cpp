#include <iostream>
using namespace std;
void totalDigits(int number) {
	int digits = 0;
	int newnumber;
	if(number==0) {
	cout << "Total number of digits: 1" ;
	return;
    }
	
	while(number > 0) {
	number /= 10;
	digits++;
	}
	cout << "Total number of digits: " << digits ;
}
int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	totalDigits(number);
}


