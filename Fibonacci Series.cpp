#include <iostream>
using namespace std;
void generateFibonacci(int length);

int main() {
    int length;
    cout << "Enter the length of the Fibonacci Series: " ;
    cin >> length;
    generateFibonacci(length);
}

void generateFibonacci(int length) {
	int first = 0;
	int second = 1; 
	int next;
    cout << first << ", " << second; 

    for (int i = 2; i < length; i++) {
        next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
    }

    cout << endl;
	 
}
