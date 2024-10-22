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
    extern const int TOTALWIDTH; 

    /**
     * @brief format a title string
     * @param title - the string we want to format
     * @param background - the background of the 
     * title
     * @return format string
     */
    string FormatTitle(const string &title,
    const char &background = '-');
    /**
     * @brief return big title formated
     * @param bigtitle - the title we formated
     * @param color - the color we paint the title
     */
    string FormatBigTitle(const string &bigtitle,
    const string &color);

    /**
     * @brief return big title formated
     * @param bigtitle - the title we formated
     */
    string FormatBigTitle(const string &bigtitle);

    /**
     * @brief make a border using background
     * @param background - the background we use
     */
    string Border(const char &background = '=');

    /**
     * @brief return string colored
     * @param txt - the txt we color
     * @param color - the color we use
     */
    string ColorString(const string &txt,const string &color = WHITE);

};

