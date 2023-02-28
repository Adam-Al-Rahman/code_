#include <iostream>

using std::cout;

const void for_loop()
{
    int i{0};

    // entry control loop
    for (i; i < 10; i++)
    {
        cout << "for_loop\n";
    }
}

const void while_loop()
{
    int number{2};

    // entry control loop
    while (number < 10)
    {
        cout << "\nwhile_loop";
        number++;
    }
}

const void do_while_loop()
{
    // exist control loop
    int number{2};

    do
    {
        cout << "do_while\n";
        number++;
    } while (number < 10);
}

const void goto_statement(int number)
{
    // It is a jump statement.
    // goto tell to jump to the label.

    if (number % 2 == 0)
        // jump to even
        goto even;
    else
        // jump to odd
        goto odd;

even:
    printf("%d is even", number);
odd:
    printf("%d is odd", number);
}

const void switch_case(int number)
{
    // duplicate case values are not allowed.
    // default statement is optional.
    // limited to `integer` and `character`.

    switch (number)
    {
    case 1:
        cout << "\nNumber: one";
        break;
    case 2:
        cout << "\nNumber: two";
        break;
    case 3:
        cout << "\nNumber: three";
        break;
    default:
        cout << "\nNot in range 1-3";
    }
}