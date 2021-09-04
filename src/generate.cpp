#include "includes.h"

void Passwords::generate()
{
    srand((unsigned) time(0));

    std::string product = {""};
    int length {};
    std::string nameOption = "n";
    std::string nameNamed = "NULL";

    std::vector <char> passwordChars {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '=', '+', '[', ']', '{', '}', '|', '<', '>', '?'};

    std::cout << "What is the desired password length: ";
    scanf("%d", &length);

    for(int i = 0; i < length; i++)
    {
        int characterPlace = 1 + (rand() % 84);

        product += passwordChars.at(characterPlace);
    }
    std::cout << "Your password is: " << std::endl << product << std::endl;

    std::ofstream writeData(".data/stored.txt", std::ios::app);

    std::cout << "Would you like to label this password (Y/n): ";

    if(nameOption == "yes" || nameOption == "Yes" || nameOption == "Y" || nameOption == "y" || nameOption == "YES")
    {
        std::cout << std::endl << "What is the label name: ";
        std::cin >> nameNamed;
    }
    else
    {
        writeData << nameNamed << " " << product << '\n';
    }
}