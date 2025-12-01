#include <iostream>
using namespace std;

bool IsSymmetrical(int num) {
    int hundreds = num / 100;         
    int ones = num % 10;               

    return hundreds == ones;           
}

int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    if (IsSymmetrical(num))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}


