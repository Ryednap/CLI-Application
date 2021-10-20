#include <iostream>
#include <array>
#include <string>
#include <sstream>

#ifndef COLORTEXT_H
#define COLORTEXT_H
#define CENTER 75

enum ColorCode {
    RED      = 31,
    GREEN    = 32,
    YELLOW   = 33,
    BLUE     = 34, 
    MAGENTA  = 35,
    CYAN     = 36,
    L_RED    = 91,
    L_GREEN  = 92, // *
    L_YELLOW = 93, // *
    L_BLUE   = 94,
    L_MAGENTA= 95, // *
    L_CYAN   = 96, // *
    DEFAULT  = 39
};

enum FontStyle {
    BOLD = 1,
    DIM = 2,
    ITALIC = 3,
    UNDERLINE = 4,
    BLINK = 5
};

const std :: string RESET =  "\e[0m";

template<typename FirstArgs, typename ... Args>
inline void TextColor(ColorCode color, FirstArgs && fargs, Args && ... args) {
    std::ostringstream stream;
    stream << fargs;
    ((stream << ";" << args), ...);
    std::cout <<  "\033[" << color << ";" << stream.str() << "m";
}

inline void Chout (char ch, int num  = 1) {
    std::cout << std::string(num, ch);
}

template<typename FirstArgs, typename ... Args>
inline void Message (bool flag, FirstArgs && fargs, Args && ... args){
    std::ostringstream stream;
    stream << fargs;
    ((stream << ' ' << args), ...);
    std::cout << stream.str();
    if (flag) std::cout << RESET;
}

#endif