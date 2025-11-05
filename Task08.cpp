#include <iostream>
using namespace std;

int calculateMoney(int age, int toyprice, int price) {
int	savings = 0;
int giftmoney = 0;
int toymoney = 0;
int onegiftmoney = 0;
	for(int i=1; i<=age; i++) {
		if(i%2 == 0) {
			onegiftmoney += 10;
			giftmoney += onegiftmoney-1;
		}
		
		else {
			toymoney += toyprice;
			}
		}
	savings = giftmoney + toymoney;
	int N = savings - price;
	
	if(savings>price) {
	cout << "Yes!" << endl << N;
	}
	else
	cout << "No!";
	return N;
}

int main() {
	int age, toyprice, price;
	cout << "Enter Lilly's age: ";
	cin >> age;
	cout << "Enter the price of the washing machine: ";
	cin >> price;
	cout << "Enter the unit price of each toy: ";
	cin >> toyprice;
	calculateMoney(age, toyprice, price);
	
}
