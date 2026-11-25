
#include <iostream>
using namespace std;

// Nested Recursion Function
int nested(int n) {

    // Base Case
    if (n > 100) {
        return n - 10;
    }

    // Nested Recursive Call
    return nested(nested(n + 11));
}

int main() {

    nested(95);

    return 0;
}
