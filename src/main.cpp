#include "includes.h"

void helpUserOption();
void helpUser();

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        char N = 'N';
        argv[2] = &N;
    }

    if(argc == 1)
    {
        std::cout << "Please enter parameters" << std::endl;
    }
    else
    {
        std::string arg = argv[1];
        std::string searchName = argv[2];
        Passwords user;

        if(arg == "-s")
        {
            user.search(searchName);
        }
        else if(arg == "-g")
        {
            user.generate();
        }
        else if(arg == "-m")
        {
            user.masterPass();
        }
        else if(arg == "-i")
        {
            user.inputPassword();
        }
        else if(arg == "-d")
        {
            bool verfication = user.verify();
            if(verfication == true)
            {
                user.display();
            }
        }
        else if(arg == "-h")
        {
            helpUser();
        }
        else
        {
            helpUserOption();
        }
    }
}

void helpUserOption()
{
    std::cout << "Not an argument" << std::endl;
    std::cout << "Use -h for help" << std::endl;
}

void helpUser()
{
    std::cout << "'-g' -- Generate a Password" << std::endl;
    std::cout << "'-i' -- Input a Password" << std::endl;
    std::cout << "'-s' -- Search for a Password" << std::endl;
    std::cout << "'-d' -- Display all Password" << std::endl;
    std::cout << "'-m' -- Master Password Options" << std::endl;
    std::cout << "'-h' -- Get Help" << std::endl;
}