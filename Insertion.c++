#include <iostream>
using namespace std;

int main() {
    int LA[100] = {10, 20, 30, 40, 50};
    int N = 5, K, ITEM;

    cout << "Enter position: ";
    cin >> K;

    cout << "Enter new element: ";
    cin >> ITEM;

    // Check for valid position and array size
    if (K < 1 || K > N + 1 || N >= 100) {
        cout << "Invalid position or array is full";
        return 0;
    }

    // Shift elements to the right to make space for the new element
    for (int J = N; J >= K; J--) {
        LA[J] = LA[J - 1];
    }

    // Insert the new element at the specified position
    LA[K - 1] = ITEM;
    N = N + 1;

    cout << "Array after insertion: ";
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }

    return 0;
}

// Another example of insertion in an array

/*  
#include <iostream>
using namespace std;

int main() {
    int LA[10] = {10, 20, 30, 40};
    int N = 4, K = 3, ITEM = 25;

    for (int J = N - 1; J >= K - 1; J--)
        LA[J + 1] = LA[J];

    LA[K - 1] = ITEM;
    N++;

    for (int i = 0; i < N; i++)
        cout << LA[i] << " ";

    return 0;
}
    */

