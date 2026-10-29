
#include <iostream>
using namespace std;

int main() {
    int STACKSIZE = 5;
    int STACK[5]={1, 2, 3, 4, 5};
    int TOP = 4;
    int ITEM;

    cout << "Enter item to PUSH: ";
    cin >> ITEM;

    // Step 1: Check Overflow
    if (TOP == STACKSIZE - 1) {
        cout << "OVERFLOW - Stack Full";
        return 0;
    }

    TOP = TOP +1; 

    STACK[TOP] = ITEM;
    int pop(TOP);
    cout << "Item pushed successfully: " << STACK[TOP] << endl;
    cout << "TOP = " << TOP << endl;

    return 0;
}
