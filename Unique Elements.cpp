#include <iostream>
using namespace std;
int FindUnique(int arr[], int N);

int main() {
    int N;
    cout << "Enter size of array: ";
    cin >> N;

    int arr[N];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    FindUnique(arr, N);
    return 0;
}
int FindUnique(int arr[], int N) {
    cout << "Unique elements in the array: ";
    for (int i = 0; i < N; i++) {
        int count = 0;

        for (int j = 0; j < N; j++) {   // Count occurrences of arr[i]
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {   // If it appears exactly once then it's unique
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}

