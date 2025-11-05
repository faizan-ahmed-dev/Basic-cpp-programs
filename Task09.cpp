#include <iostream>
using namespace std;

int calculatePrice(int money, int year) {
    int age = 18;
    for (int i = 1800; i <= year; i++) {
        if (i % 2 == 0) {
            money -= 12000;
        } else {
            money -= (12000 + 50 * age);
        }
        age++;
    }
    return money;
}

int main() {
    int money, year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;

    int remaining = calculatePrice(money, year);

    if (remaining >= 0)
        cout << "Yes! He will live a carefree life and will have " << remaining << " dollars left.";
    else
        cout << "He will need " << abs(remaining)<< " dollars to survive.";
  return 0;
}

