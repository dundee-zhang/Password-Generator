#include "includes.h"

bool Passwords::verify()
{
    std::ifstream getMP("bin/.data/mp.txt");
    std::string userPass {""}, storedMP {""};
    getMP >> storedMP;

    if(storedMP == "NULL")
    {
        std::cout << "NO MASTER PASSWORD FOUND" << std::endl;
        std::cout << "Set a Master Password" << std::endl;
        getMP.close();
        Passwords userSet;
        userSet.masterPass();
        return true;
    }

    std::cout << "Enter master password: ";
    std::cin >> userPass;

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