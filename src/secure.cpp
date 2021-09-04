#include "includes.h"

bool Passwords::verify()
{
    std::ifstream getMP("bin/.data/mp.txt");
    std::string userPass {""}, storedMP {""};

    std::cout << "Enter master password: ";
    std::cin >> userPass;

    getMP >> storedMP;

    if(storedMP == userPass)
    {
        std::cout << std::endl;
        getMP.close();
        return true;
    }
    else
    {
        std::cout << std::endl << "ERROR" << std::endl;
        getMP.close();
        return false;
    }
}