#include <iostream>

using namespace std;

int main()
{
    unsigned int amount;
    cin >> amount;

    unsigned int* days = new unsigned int[amount];

    for (unsigned int i = 0; i < amount; i++)
    {
        cin >> days[i];
    }

    unsigned int count = 0;

    for (unsigned int i  = 0; i < amount; i++)
    {
        if (days[i])
        {
            count += days[i];
        }

        if (count)
        {
            cout << "+ ";
            count--;
        }

        else
        {
            cout << "- ";
        }


    }


    for (; count != 0; count--)
    {
        cout << "+ ";
    }


    delete [] days;
    return 0;
}
