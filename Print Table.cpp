#include <iostream>
using namespace std;
void printTable(int number) {
	int table, product;
	for(int table=1; table<=10;table++) {
	product = number * table;
	cout << number << " x " << table << " = " << product << endl;
	}
	
}

int main() {
	int number, product, table;
	cout << "Enter a number: " ;
	cin >> number;
	printTable(number);
	return 0;
}


