#include <iostream>
using namespace std;

int main()
{
    int QUEUE[5] ;
    int  FRONT = -1, REAR = -1;
    int COUNT = 0, ITEM, MAXSIZE = 5;

    cin >> ITEM;

    if (COUNT == MAXSIZE)
        cout << "OVERFLOW";
    else
    {
        if (COUNT == 0)
            FRONT = REAR = 0;
        else if (REAR == MAXSIZE - 1)
            REAR = 0;
        else
            REAR++;

        QUEUE[REAR] = ITEM;
        COUNT++;

        cout << "Inserted: " << QUEUE[REAR];
    }

    return 0;
}