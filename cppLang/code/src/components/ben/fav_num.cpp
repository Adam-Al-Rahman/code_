#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int favorite_number()
{
    int favorite_number;
    int my_num{23}; // Declare and initialize the variable.

    cout << "Enter your favorite number between 1 and 100 :  ";
    cin >> favorite_number;

    if (favorite_number == my_num && 1 <= favorite_number <= 100)
    {
        cout << "Amazing!! That's my favorite number too." << endl;
    }
    else if (favorite_number > 100 || favorite_number < 1)
    {
        cout << "Please enter in range 1 to 100 \n";
    }
    else
    {
        cout << "Amazing!!" << endl;
    }

    system("pause>Pause_File");
    return 0;
}
