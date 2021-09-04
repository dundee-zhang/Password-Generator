#include "includes.h"

int main(int argc, char** argv)
{
    if(argc == 1)
    {
        std::cout << "Please enter parameters" << std::endl;
    }
    else
    {
        std::string arg = argv[1];
        Passwords user;

        if(arg == "-s")
        {
            user.search();
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
        else
        {
            return -1;
        }
    }
}