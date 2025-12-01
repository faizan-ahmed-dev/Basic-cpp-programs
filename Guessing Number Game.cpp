#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    int players;
    cout << "Enter number of players: ";
    cin >> players;

    int attempts[players];       // store attempts of each player
    int winnersList[players];    // store winners
    int winCount = 0;
    int targetNumber;
    int guess;

    for(int i = 0; i < players; i++) {
        cout << "\n--- Player " << i+1 << " ---\n";

        targetNumber = (rand() + time(0)) % 100;  // generate random number for each player

        int attemptsUsed = 0;
        bool won = false;

        while( attemptsUsed < 5) {
            cout << "Enter guess (0-100): ";
            cin >> guess;
            attemptsUsed++;

            if(guess == targetNumber) {
                cout << "Correct! You guessed it.\n";
                won = true;
                winnersList[winCount] = i + 1;  // store winner
                winCount++;
                break;
            }
            else if(guess > targetNumber) {
                cout << "Too high, try lower!\n";
            }
            else {
                cout << "Too low, try higher!\n";
            }
        }

        if(won)
            attempts[i] = attemptsUsed;    // number of attempts used
        else {
            cout << "No attempts left! The number was: " << targetNumber << "\n";
            attempts[i] = 5;        // failed = 5 attempts
        }
    }

    //  Summary Section
    cout << "\n===== GAME SUMMARY =====\n";
    cout << "Total Players: " << players << endl;

    int winners = winCount;
    int losers = players - winCount;

    cout << "Total Winners: " << winners << endl;
    cout << "Total Losers: " << losers << endl;


    cout << "\nTop Three Winners: ";
    if(winCount == 0)
        cout << "No winners\n";
    else {
        for(int i = 0; i < winCount && i < 3; i++) {
            cout << "Player " << winnersList[i];
            if(i < winCount - 1 && i < 2)
                cout << ", ";
        }
        cout << endl;
    }
    return 0;
}

