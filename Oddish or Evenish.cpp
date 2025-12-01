#include <iostream>
using namespace std;

string OddishOrEvenish(int num) {
    int sum = 0;
    int original = num;

    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }
    
    if (sum % 2 == 0)
        return "Evenish";
    else
        return "Oddish";
}

int main() {
    int number;
    cout << "Enter a five-digit number: ";
    cin >> number;

    if (number < 10000 || number > 99999) {
        cout << "Please enter a valid five-digit number." << endl;
        
    }

    cout << "The number " << number << " is " << OddishOrEvenish(number) << "." << endl;

    return 0;
}

