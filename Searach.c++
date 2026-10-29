
#include <iostream>
using namespace std;

int main()
{
    int LA[5] = {10, 20, 30, 40, 50};
    int KEY = 30;
    int i;

    for (i = 0; i < 5; i++)
    {
        if (LA[i] == KEY)
        {
            cout << "Key found at index: " << i;
            return 0;
        }
    }

    cout << "Key not found";

    return 0;
}