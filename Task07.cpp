#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;
int main() {
    int n;
    cout << "Enter numbers count: ";
    cin >> n;  // number of inputs
    
    int number;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0; // counters

    for (int i = 0; i < n; i++) {
    	cout << "Enter a number: ";
        cin >> number;

        if (number < 200)
            c1++;
        else if (number < 400)
            c2++;
        else if (number < 600)
            c3++;
        else if (number < 800)
            c4++;
        else
            c5++;
    }

    // Calculate percentages
    double p1 = (c1 * 100.0) / n;
    double p2 = (c2 * 100.0) / n;
    double p3 = (c3 * 100.0) / n;
    double p4 = (c4 * 100.0) / n;
    double p5 = (c5 * 100.0) / n;

    // Print results with 2 decimal places
    cout << fixed << setprecision(2);
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;

    return 0;
}

