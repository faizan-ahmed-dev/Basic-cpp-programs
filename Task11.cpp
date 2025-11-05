#include <iostream>
using namespace std;

string calculatePoolState(int V, int P1, int P2, float H) {
    float totalWater = (P1 + P2) * H;

    if (totalWater <= V) {
        float fullness = (totalWater / V) * 100;
        float pipe1Percent = (P1 * H / totalWater) * 100;
        float pipe2Percent = (P2 * H / totalWater) * 100;

        string result = "The pool is " + to_string((int)fullness) + "% full. "
                      + "Pipe 1: " + to_string((int)pipe1Percent) + "%. "
                      + "Pipe 2: " + to_string((int)pipe2Percent) + "%.";
        return result;
    } 
    else {
        float overflow = totalWater - V;
        string result = "For " + to_string((int)H) + " hours the pool overflows with "
                      + to_string((int)overflow) + " liters.";
        return result;
    }
}

int main() {
    int V, P1, P2;
    float H;

    cout << "Enter pool volume (liters): ";
    cin >> V;

    cout << "Enter flow rate of first pipe (liters/hour): ";
    cin >> P1;

    cout << "Enter flow rate of second pipe (liters/hour): ";
    cin >> P2;

    cout << "Enter hours the worker is away: ";
    cin >> H;

    string result = calculatePoolState(V, P1, P2, H);
    cout << result << endl;
    return 0;
}

