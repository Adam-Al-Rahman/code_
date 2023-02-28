#include <iostream>

using std::cin;
using std::cout;
using std::string;

const void algo_sum_to_target(int array[], int target)
{
    int size = (sizeof(array) / sizeof(array[0]));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((array[i] + array[j]) == target)
            {
                cout << "Index: "
                     << "[" << i << "," << j << "]";
                break;
            }
        }
    }
}

const void sum_to_target()
{
    int target;
    cout << "Enter the target: ";
    cin >> target;

    int array[5] = {1, 2, 3, 4};
    algo_sum_to_target(array, 5);
}

const void string_input()
{
    string name;
    cout << "Enter the name: ";
    getline(cin, name);
    cout << name;
}