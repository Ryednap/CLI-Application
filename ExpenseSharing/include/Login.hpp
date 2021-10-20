#include <string>
#include "colorText.hpp"
#ifndef LOGIN_H
#define LOGIN_H


class Login {
private:
    std::string username;
    std::string password;
public:
    Login();
    ~Login();

    bool authenticate();
    std::string getUsername();
    std::string getPassword();
    void setUsername(std::string);
    void setPassword(std::string);
};

#endif