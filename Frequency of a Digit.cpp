#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit);  // Function prototype

int frequencyChecker(int number, int digit) {  // Function definition
    int count = 0;
    
    if (number == 0 && digit == 0) 
        return 1; // special case: 0 contains one 0

    while (number > 0) {
        int lastDigit = number % 10;  // extract last digit
        if (lastDigit == digit)
            count++;                  // increase count if match found
        number /= 10;                 // remove last digit
    }

    return count;
}

int main() {
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;

    int result = frequencyChecker(number, digit);
    cout << "Frequency of " << digit << " in " << number << " is: " << result;
}

