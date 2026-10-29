
#include <iostream>
using namespace std;

int main()
{
    int LA[5] = {10, 20, 30, 40, 50};

    int LB = 0;
    int UB = 4;

    for (int K = LB; K <= UB; K++)
    {
        cout << LA[K] << endl;
    }

    return 0;
}

// Another way to traverse the array using while loop
/*
#include <iostream>
using namespace std;

int main()
{
    int LA[5] = {10, 20, 30, 40, 50};

    int LB = 0;
    int UB = 4;
    int K;

    K = LB;

    while (K <= UB)
    {
        cout << LA[K] << endl;

        K = K + 1;
    }

    return 0;
}
    */