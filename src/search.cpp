#include "includes.h"

void Passwords::search()
{

}

void Passwords::display()
{
    std::ifstream readFile("bin/.data/stored.txt");
    std::string readDisplayName, readDisplayPass;

    while(readFile >> readDisplayName >> readDisplayPass)
    {
        if(readDisplayName == "NULL")
        {
            std::cout << "No Label Set: " << readDisplayPass;
            std::cout << std::endl;
            continue;
        }
        std::cout << readDisplayName << ": " << readDisplayPass;
        std::cout << std::endl;
    }
}