#pragma once
using namespace std;
#include <string>

namespace Design{
    // Declare color constants
    extern const std::string RESET;
    extern const std::string BLACK;
    extern const std::string RED;
    extern const std::string GREEN;
    extern const std::string YELLOW;
    extern const std::string BLUE;
    extern const std::string MAGENTA;
    extern const std::string CYAN;
    extern const std::string WHITE;
    extern const std::string ORANGE; 

    /**
     * @brief format a title string
     * @param title - the string we want to format
     * @return format string
     */
    string FormatTitle(const string &title);

    /**
     * @brief return string colored
     * @param txt - the txt we color
     * @param color - the color we use
     */
    string ColorString(const string &txt,const string &color = WHITE);

};

