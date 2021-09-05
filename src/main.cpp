#include "includes.h"

void helpUserOption();
void helpUser(std::string argHelp);

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
        int intArg {0};
        std::string arg = argv[1];
        std::string argTwo = argv[2];
        Passwords user;

        if(arg == "-s")
        {
            user.search(argTwo);
        }
        else if(arg == "-g")
        {
            std::stringstream argTwoString(argTwo);
            argTwoString >> intArg;
            user.generate(intArg);
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
            helpUser(argTwo);
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

void helpUser(std::string argHelp)
{
    std::cout << "'-g' -- Generate a Password" << std::endl;
    std::cout << "'-i' -- Input a Password" << std::endl;
    std::cout << "'-s' -- Search for a Password" << std::endl;
    std::cout << "'-d' -- Display all Password" << std::endl;
    std::cout << "'-m' -- Master Password Options" << std::endl;
    std::cout << "'-h' -- Get Help" << std::endl;
    std::cout << "Do '-h with a parameter to learn more" << std::endl;

    if(argHelp == "-g")
    {
        std::cout << "Generate a new password" << std::endl;
        std::cout << "Takes 1 argument: -g {x}" << std::endl;
        std::cout << "x is the length of the password desired" << std::endl;
    }
    else if(argHelp == "-i")
    {
        std::cout << "Input a new password" << std::endl;
        std::cout << "Takes no arguments: -i" << std::endl;
    }
    else if(argHelp == "-s")
    {
        std::cout << "Search old passwords" << std::endl;
        std::cout << "Takes 1 argument: -s {x}" << std::endl;
        std::cout << "x is the name of the password label" << std::endl;
    }
    else if(argHelp == "-d")
    {
        std::cout << "Search old passwords" << std::endl;
        std::cout << "Takes no arguments: -d" << std::endl;
    }
    else if(argHelp == "-m")
    {
        std::cout << "Change master password" << std::endl;
        std::cout << "Takes no arguments: -m" << std::endl;
    }
    else
    {
        std::cout << "That's not an option" << std::endl;
    }
}