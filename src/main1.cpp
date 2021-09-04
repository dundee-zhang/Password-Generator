#include "includes.h"

void masterPass();

int main()
{
    int option {};

    std::cout << "[0] Set/Change Master Password" << std::endl;
    std::cout << "[1] Generate Password" << std::endl;
    std::cout << "[2] See Past Passwords" << std::endl;
    std::cout << "[3] Search Passwords" << std::endl;
    std::cout << "[4] Input Password" << std::endl;
    std::cout << "[Other] Exit\n>> ";
    scanf("%d", &option);

    Passwords user;

    if(option == 1)
    {
        user.generate();
    }
    else if(option == 2)
    {
        bool verfication = user.verify();
        if(verfication == true)
        {
            user.display();
        }
    }
    else if(option == 3)
    {
        user.search();
    }
    else if(option == 4)
    {
        user.inputPassword();
    }
    else if(option == 0)
    {
        user.masterPass();
    }
    else
    {
        return 0;
    }
    return 0;
}