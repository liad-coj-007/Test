#include "Design.h"
using namespace std;
#include <string>
#include <sstream>
#include <iostream>


namespace Design{
    const string RESET = "\033[0m";
    const string BLACK = "\033[30m";
    const string RED = "\033[38;5;196m";
    const string GREEN = "\033[1;32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string MAGENTA = "\033[35m";
    const string CYAN = "\033[38;5;38m";
    const string ORANGE = "\033[38;5;214m";
    const int TOTALWIDTH = 60; 

    string FormatTitle(const string &title,
    const char &background){
        std::ostringstream os; 
        std::string border(TOTALWIDTH, background);
        os << border << "\n"; 
        int titleLength = title.length();
        int spaces = TOTALWIDTH - titleLength - 4; 
        int leftPadding = spaces / 2; 
        os << std::string(leftPadding, ' ') << title 
        << std::string(spaces - leftPadding, ' ') << "\n";
        os << border << "\n\n"; 
        return os.str(); 
    }

    string ColorString(const string &txt, const string &color) {
        return color + txt + RESET; 
    }

    string Border(const char &background){
        std::ostringstream os; 
        std::string border(TOTALWIDTH, background);
        os << border << "\n"; 
        return os.str();
    }


    string FormatBigTitle(const string &bigtitle,
    const string &color){
        std::ostringstream os;
        os << Border(); 
        const char dash ='-';
       
        int titleLength = bigtitle.length();
        int spaces = TOTALWIDTH - titleLength - 4; 
        int leftPadding = spaces / 2; 
        const string title = ColorString(bigtitle,
        color);
        string board = ColorString(
            string(titleLength,dash),color);
        os << std::string(leftPadding, ' ') << title 
        << std::string(spaces - leftPadding, ' ') << "\n";
        os << std::string(leftPadding, ' ') << board 
        << std::string(spaces - leftPadding, ' ') << "\n\n";
        return os.str();
    }

    string FormatBigTitle(const string &bigtitle){
        std::ostringstream os;
        os << Border(); 
        const char dash ='-';
        int titleLength = bigtitle.length();
        int spaces = TOTALWIDTH - titleLength - 4; 
        int leftPadding = spaces / 2; 
     
        string board = string(titleLength,dash);
        os << std::string(leftPadding, ' ') << bigtitle 
        << std::string(spaces - leftPadding, ' ') << "\n";
        os << std::string(leftPadding, ' ') << board 
        << std::string(spaces - leftPadding, ' ') << "\n\n";
        return os.str();
    }
 


}
