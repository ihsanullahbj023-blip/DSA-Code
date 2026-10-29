
#include <iostream>
using namespace std;

int STACK[5] = {10, 20, 30};
int TOP = 2;

void pop() {
    if (TOP == -1) {
        cout << "Stack is empty";
    } else {
        cout << "Removed: " << STACK[TOP] << endl;
        TOP = TOP - 1;
    }
}

int main() {
    pop();
    pop();
    pop();

    return 0;
}
