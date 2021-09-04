#include "includes.h"

int main()
{
    int option {};

    printf("[0] Set/Change Master Password\n[1] Generate Password\n[2] See Past Passwords\n[3] Search Passwords\n[Other] Exit\n>> ");
    scanf("%d", &option);

    Passwords user;

    if(option == 1)
    {
        user.generate();
    }
    else if(option == 2)
    {
        user.display();
    }
    else if(option == 3)
    {
        user.search();
    }
    else if(option == 0)
    {
        // set masterpass
    }
    else
    {
        return 0;
    }
    return 0;
}