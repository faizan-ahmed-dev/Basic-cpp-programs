#include <iostream>
using namespace std;

void numberToWords(int num) {
    if (num < 1 || num > 99) {
        cout << "Out of range";
        }

    else if (num < 20) {
        switch (num) {
            case 1: cout << "One"; break;
            case 2: cout << "Two"; break;
            case 3: cout << "Three"; break;
            case 4: cout << "Four"; break;
            case 5: cout << "Five"; break;
            case 6: cout << "Six"; break;
            case 7: cout << "Seven"; break;
            case 8: cout << "Eight"; break;
            case 9: cout << "Nine"; break;
            case 10: cout << "Ten"; break;
            case 11: cout << "Eleven"; break;
            case 12: cout << "Twelve"; break;
            case 13: cout << "Thirteen"; break;
            case 14: cout << "Fourteen"; break;
            case 15: cout << "Fifteen"; break;
            case 16: cout << "Sixteen"; break;
            case 17: cout << "Seventeen"; break;
            case 18: cout << "Eighteen"; break;
            case 19: cout << "Nineteen"; break;
        }
    } 
    else {
        int tens = num / 10;
        int ones = num % 10;

        switch (tens) {
            case 2: cout << "Twenty"; break;
            case 3: cout << "Thirty"; break;
            case 4: cout << "Forty"; break;
            case 5: cout << "Fifty"; break;
            case 6: cout << "Sixty"; break;
            case 7: cout << "Seventy"; break;
            case 8: cout << "Eighty"; break;
            case 9: cout << "Ninety"; break;
        }

        switch (ones) {
            case 1: cout << "One"; break;
            case 2: cout << "Two"; break;
            case 3: cout << "Three"; break;
            case 4: cout << "Four"; break;
            case 5: cout << "Five"; break;
            case 6: cout << "Six"; break;
            case 7: cout << "Seven"; break;
            case 8: cout << "Eight"; break;
            case 9: cout << "Nine"; break;
        }
    }
}

int main() {
    int n;
    cout << "Enter a number (1-99): ";
    cin >> n;

    numberToWords(n);
    cout << endl;

    return 0;
}

