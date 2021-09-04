#include "includes.h"

int main()
{
    int option {};

    printf("[1] Generate Password\n[2] See Past Passwords\n[Other] Exit\n>> ");
    scanf("%d", &option);

    if(option == 1)
    {
        Passwords ob;
        ob.generate();
    }
    else if(option == 2)
    {
        // read file storing old passwords
    }
    else
    {
        return 0;
    }
    return 0;
}