#include <iostream>
using namespace std;
 int main() {
 	int num;
    cout << "Enter a four-digit number: ";
    cin >> num;

     int d1 = num % 10;        // last digit
    int d2 = (num / 10) % 10;
    int d3 = (num / 100) % 10;
    int d4 = (num / 1000) % 10;

    cout << "Digits are: " << endl;
    cout << d1 << endl;
    cout << d2 << endl;
    cout << d3 << endl;
    cout << d4 << endl;
 
  
    return 0;
    
}
