#include "Login.hpp"

Login :: Login() {

    TextColor(L_YELLOW, ITALIC);
    Message (1, "Please login to continue....\n\n");
TryAgain:
    TextColor(L_CYAN, BOLD);
    Message(1, "Username: ");
    std::cin >> username;
    TextColor(L_CYAN, BOLD);
    Message(1, "Pasword: ");
    std::cin >> password;
    
    std::cout << "\n";
    if (!authenticate()) {
        TextColor(L_RED, BOLD);
        Message(1, "Invalid credentials... Please Try again\n");
        goto TryAgain;

    } else {
        TextColor(L_GREEN, BOLD);
        Message(1, "Successful Login...\n");
    }
}

Login :: ~Login () {
    TextColor(BLUE, BOLD);
    Message(1, "Logout....\n");
}

bool Login :: authenticate() {
    if (username.empty() | password.empty())
        return false;
    if (!isalpha(username.front()))
        return false;
    const size_t len = password.length();
    if (len > (size_t) 8 || len < (size_t) 4)
        return false;
    return true;
}
