#include "includes.h"

int main()
{
    int option {};

    printf("[0] Set/Change Master Password\n[1] Generate Password\n[2] See Past Passwords\n[3] Search Passwords\n[Other] Exit\n>> ");
    scanf("%d", &option);

    if(option == 1)
    {
        Passwords ob;
        ob.generate();
    }
    else if(option == 2)
    {
        // display old passwords
    }
    else if(option == 3)
    {
        // search passwords
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