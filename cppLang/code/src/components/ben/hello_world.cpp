#include <iostream>

/**
 * Here the HW is `not` called as  `global variable` it is called the `pre-processor symbol`
 * The symbol is available globally
 */
#define H "Hello"

extern char w[6] = "World";
extern void PrintHello();

void PrintHello()
{
    std::cout << H << " " << w;
}