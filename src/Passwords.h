#ifndef SRC_PASSWORDS_H
#define  SRC_PASSWORDS_H

class Passwords
{
private:
public:
    void generate();
    void search(std::string searched);
    void display();
    bool verify();
    void inputPassword();
    void masterPass();
};


#endif // !SRC_PASSWORDS_H