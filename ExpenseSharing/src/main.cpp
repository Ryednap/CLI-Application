#include "colorText.hpp"
#include "Login.hpp"
#include <iostream>
using namespace std;


int main () {
    Chout('\n', 4); Chout(' ', CENTER);
    TextColor(DEFAULT, BOLD, ITALIC, UNDERLINE);
    Message (1, "REVENUE EXCHANGE SERVICE");
    Chout('\n', 4);
    Login object;
    return 0;
}