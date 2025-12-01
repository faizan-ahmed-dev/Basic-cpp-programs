#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isItPrime(int n) {
    if (n < 2)
        return false; // numbers less than 2 are not prime

    // check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false; // if divisible, not prime
    }
    return true; // otherwise, it's prime
}

int main() {
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";

    // loop from 2 to n and check for primes
    for (int i = 2; i <= n; i++) {
        if (isItPrime(i)) {
            cout << i << " ";
            count++; // count each prime
        }
    }

    cout << "\nTotal prime numbers: " << count << endl;

    return 0;
}

