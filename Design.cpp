#include "Design.h"
using namespace std;
#include <string>
#include <sstream>
#include <iostream>


namespace Design{
    const string RESET = "\033[0m";
    const string BLACK = "\033[30m";
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string MAGENTA = "\033[35m";
    const string CYAN = "\033[36m";
    const string ORANGE = "\033[38;5;214m";

    string FormatTitle(const string &title){
        const int totalWidth = 40; 
        const char background = '-'; 
        std::ostringstream os; 
        std::string border(totalWidth, background);
        os << border << "\n"; 
        int titleLength = title.length();
        int spaces = totalWidth - titleLength - 4; 
        int leftPadding = spaces / 2; 
        os << std::string(leftPadding, ' ') << title 
        << std::string(spaces - leftPadding, ' ') << "\n";
        os << border << "\n\n"; 
        return os.str(); 
    }

    string ColorString(const string &txt, const string &color) {
        return color + txt + RESET; 
    }

}
