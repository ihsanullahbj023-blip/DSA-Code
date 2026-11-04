//remove the duplicates from the array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Remove duplicates
    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}