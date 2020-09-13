#include <iostream>
//#include <vector>

using namespace std;

int main()
{

    unsigned int amount;
    cin >> amount;

    //vector <unsigned int> games_nums;
    //vector <unsigned int> games_time;

    unsigned int* games_nums = new unsigned int[amount];
    unsigned int* games_time = new unsigned int[amount];

    for (unsigned int i = 0; i < amount; i++)
    {
        cin >> games_nums[i] >> games_time[i];
    }


    unsigned int max_time = games_time[0];
    unsigned int max_id = games_nums[0];

    for (unsigned int i = 1; i  < amount; i ++)
    {
        if (max_time < games_time[i])
        {
            max_id = games_nums[i];
            max_time = games_time[i];
        }
    }

    cout << '\n' << max_id;

    delete[] games_nums;
    delete[] games_time;

    return 0;
}
