
#include <iostream>
using namespace std;

int main() {
    // int DATA[] = {10, 50, 20, 80, 30};
    int DATA[] = {10, 50, 20, 80, 30};
    int N = 5, MAX = DATA[0], LOC = 0;

    for (int K = 1; K < N; K++) {
        if (DATA[K] < MAX) {
            MAX = DATA[K];
            LOC = K;
        }
    }

    cout << "Largest = " << MAX << endl;
    cout << "Location = " << LOC;
    return 0; 
}


