#include "includes.h"

void settingPassword();

void Passwords::generate()
{
    srand((unsigned) time(0));

    std::string product = {""};
    int length {};
    std::string nameOption = "n";
    std::string nameNamed = "NULL";

    std::vector <char> passwordChars {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '=', '+', '[', ']', '{', '}', '?', '<', '>', '|'};

    std::cout << "What is the desired password length: ";
    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        int characterPlace = 1 + (rand() % 83);

        product += passwordChars.at(characterPlace);
    }
    std::cout << "Your password is: " << std::endl << product << std::endl;

    std::ofstream ofile("bin/.data/stored.txt", std::ios::app);

    std::cout << "Would you like to label this password (Y/n): ";

    std::cin >> nameOption;

    if(nameOption == "yes" || nameOption == "Yes" || nameOption == "Y" || nameOption == "y" || nameOption == "YES")
    {
        std::cout << std::endl << "What is the label name: ";
        std::cin >> nameNamed;
        ofile << nameNamed << " " << product << '\n';
    }
    else
    {
        ofile << nameNamed << " " << product << '\n';
    }

    ofile.close();
}

void Passwords::inputPassword()
{
    std::string product {""}, nameOption {""}, nameNamed {""};
    std::cout << "Input Password: ";
    std::cin >> product;

    std::ofstream ofile("bin/.data/stored.txt", std::ios::app);

    std::cout << "Would you like to label this password (Y/n): ";

    std::cin >> nameOption;

    if(nameOption == "yes" || nameOption == "Yes" || nameOption == "Y" || nameOption == "y" || nameOption == "YES")
    {
        std::cout << std::endl << "What is the label name: ";
        std::cin >> nameNamed;
        ofile << nameNamed << " " << product << '\n';
    }
    else
    {
        ofile << nameNamed << " " << product << '\n';
    }

    ofile.close();
}

void Passwords::masterPass()
{
    std::ifstream readPassword("bin/.data/mp.txt");

    std::string password {""}, userInputMP{""};

    readPassword >> password;

    if(password != "NULL")
    {
        std::cin >> userInputMP;
        if(userInputMP == password)
        {
            settingPassword();
            readPassword.close();
        }
        else
        {
            std::cout << "Wrong Password" << std::endl;
            readPassword.close();
        }
    }
    else
    {
        settingPassword();
        readPassword.close();
    }
}

void settingPassword()
{
    std::ofstream generateNewPass("bin/.data/mp.txt");
    std::string newPass {""};
    
    std::cout << "Enter new master password: ";
    std::cin >> newPass;

    generateNewPass << newPass;
    generateNewPass.close();
}