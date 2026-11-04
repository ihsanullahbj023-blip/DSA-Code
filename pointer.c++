//this change a value of a variable using a pointer

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int* ptr = &a; // Pointer to integer
    *ptr = 100; // Point to the address of a

    cout << "Value of a before change: " << a << endl;
    *ptr = 20;

    return 0;
}