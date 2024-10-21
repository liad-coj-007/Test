#include "Design.h"
using namespace std;
#include <string>
#include <sstream>
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