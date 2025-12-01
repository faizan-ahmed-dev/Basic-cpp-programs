/* Q10.
Take a character as input.
Print:

“Vowel”

“Consonant”

(use nested if/else or multiple if/else) */

#include <iostream>
using namespace std;

int main() {
	char letter;
	cout << "Enter a letter of the alphabet: ";
	cin >> letter;
	
	if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
	   letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
		cout << "The letter " << letter << " is a vowel.";
	else
		cout << "The letter " << letter << " is a consonant.";
		
	return 0;
}
