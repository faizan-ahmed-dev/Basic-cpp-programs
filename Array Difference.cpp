#include <iostream>
using namespace std;
int FindDifference(int arr1[], int arr2[], int N1, int N2);

int main() {
    int N1, N2;
    
    cout << "Enter size of array 1: ";
    cin >> N1;
    cout << "Enter size of array 2: ";
    cin >> N2;

    int arr1[N1], arr2[N2];

    cout << "Enter elements of array 1: ";
    for(int i = 0; i < N1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter elements of array 2: ";
    for(int i = 0; i < N2; i++) {
        cin >> arr2[i];
    }
    FindDifference(arr1, arr2, N1, N2);   // Call function
    return 0;
}
// Function to find elements in arr1 not present in arr2
int FindDifference(int arr1[], int arr2[], int N1, int N2) {
    cout << "Elements in array 1 not present in array 2: ";

    for(int i = 0; i < N1; i++) {
        bool found = false;

        for(int j = 0; j < N2; j++) {  // Check if arr1[i] exists in arr2
            if(arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if(!found) {   // If not found, print it
            cout << arr1[i] << " ";
        }
    }
    cout << endl;
    return 0; 
}

