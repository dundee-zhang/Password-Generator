#include "includes.h"

void Passwords::search(std::string searched)
{
    Passwords searchObj;
    bool verified = searchObj.verify();

    if(verified == true)
    {
        std::ifstream readFile("bin/.data/stored.txt");
        std::string passName {searched};
        std::string filePassName {""}, filePassword {""};

    while(readFile >> filePassName)
    {
        if(passName == filePassName)
        {
            readFile >> filePassword;
            std::cout << "The password is: " << filePassword << std::endl;
            break;
        }
        else
        {
            continue;
        }
    }

    std::cout << "No passwords with label \"" << passName << "\" found" << std::endl
        << "Displaying all passwords: " << std::endl;

    std::cout << std::endl << "PASSWORDS:" << std::endl;
    searchObj.display();
    readFile.close();
    }

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

    
    readFile.close();
}