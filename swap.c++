// swap using reference function important DSA
#include <iostream>
using namespace std;
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    int a = 10;
    int b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap using reference
    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
} 


// swap using without third variable
#include <iostream>
using namespace std;
void swap(int &x, int &y) {
    x = x + y; // Step 1: Add both numbers
    y = x - y; // Step 2: Subtract the new y from the sum to get original x
    x = x - y; // Step 3: Subtract the new y from the sum to get original y
}   
int main() {
    int a = 10;
    int b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap without third variable
    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}