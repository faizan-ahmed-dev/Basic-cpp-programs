#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2) {
    while (number2 != 0) {
        int remainder = number1 % number2;
        number1 = number2;
        number2 = remainder;
    }
    /*
Example: number1 = 23, number2 = 32
GCD steps (Euclidean Algorithm):
23 % 32 = 23
32 % 23 = 9
23 % 9  = 5
9 % 5   = 4
5 % 4   = 1
4 % 1   = 0 so GCD = 1
*/
    return number1;  // When number2 = 0, number1 is the GCD
}

int calculateLCM(int number1, int number2, int gcd) {
    /* Using LCM formula: (num1 × num2) / GCD
       For 23, 32. (23 × 32) / 1 = 736 */
    return (number1 * number2) / gcd;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int gcd = calculateGCD(num1, num2);
    int lcm = calculateLCM(num1, num2, gcd);

    cout << "\nGCD: " << gcd;
    cout << "\nLCM: " << lcm << endl;

    return 0;
}

