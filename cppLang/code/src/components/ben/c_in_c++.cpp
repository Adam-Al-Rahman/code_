// `cstdio` library is used to import the default c functionality in c++
#include <cstdio>
#include <string.h>

void message()
{
    char message[10];
    printf("Enter the message: ");
    scanf("%s", message);
    if (strcmp(message, "Hi!") == 0)
    {
        printf("Hello");
    }
    else
    {
        printf("How to write c code in c++?");
    }
};