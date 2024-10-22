#include "Test.h"
using namespace std;
#include <iomanip> 
#include <vector>
#include <algorithm> 
#include <sstream>
#include "Design.h"

const std::string Test::ACTUALFLAG = "Actual: ";
const std::string Test::EXPECTED = "Expected: ";
const std::string Test:: DIFF = "Differences:\n";
const std::string Test::PASSFLAG = "[TEST PASS!]";
const std::string Test::fAILEDFLAG = "[TEST FAILED!]";


Test::Test(const string &testname,
const string &output,const string &expected):testname(testname){
    data = "";
    if(output == expected){
        testpass = 1;
    }else{
        testpass = 0;
        FormatData(output,expected);
    }
}

string Test::compareStrings(const std::string& str1, const std::string& str2) {
    std::stringstream ss1(str1);
    std::stringstream ss2(str2);
    std::string line1, line2;
    std::vector<std::string> lines1, lines2;

    // Read all lines into vectors
    while (std::getline(ss1, line1)) {
        lines1.push_back(line1);
    }
    while (std::getline(ss2, line2)) {
        lines2.push_back(line2);
    }

    std::string result;
    size_t maxLength = std::max(lines1.size(), lines2.size());
    for (size_t i = 0; i < maxLength; ++i) {
        if (i < lines1.size() && i < lines2.size()) {
            if (lines1[i] != lines2[i]) {
                result += "--- Line " + std::to_string(i + 1) + " ---\n";
                result += "- " + lines1[i] + "\n"; // Line from str1
                result += "+ " + lines2[i] + "\n"; // Line from str2
            }
        } else if (i < lines1.size()) {
            result += "--- Line " + std::to_string(i + 1) + " ---\n";
            result += "- " + lines1[i] + "\n"; // Line from str1 (removed)
        } else if (i < lines2.size()) {
            result += "--- Line " + std::to_string(i + 1) + " ---\n";
            result += "+ " + lines2[i] + "\n"; // Line from str2 (added)
        }
    }

    return result.empty() ? "No differences found." : result;
}



void Test::FormatData(const string &output,const string &expected){
    data += EXPECTED + "\n" + expected + "\n";
    data += ACTUALFLAG + "\n" + output + "\n";
    data += DIFF;
    data += compareStrings(output,expected);
}

ostream& operator<<(ostream &os,const Test &test){
    os << test.getTitle();
    test.PassMsg(os);
    os << test.data;
    return os;
}

string Test::getOutput()const{
    string output = testname +" : ";
    if(testpass){
        output += PASSFLAG;
    }else{
        output += fAILEDFLAG;
    }
    output += "\n";
    output += data;
    return output;
}

bool Test::isPass()const{
    return testpass;
}

void Test::PassMsg(ostream &os)const{
    const string subtitle = "Test Stat: ";
    os << Design::ColorString(subtitle,Design::CYAN);
    if(testpass){
        os << Design::ColorString(PASSFLAG,Design::GREEN)<<"\n";
        return;
    }
    os << Design::ColorString(fAILEDFLAG,Design::RED) << "\n\n";
}

string Test::getTitle() const{
    return Design::FormatTitle(testname);
}


string Test::getTestFlag(const bool iscolored)const{
    std::ostringstream oss;

        const int flagWidth = 30;
        string name =  testname +": ";
        oss << std::left << std::setw(flagWidth) << name;
        if(iscolored){
            if (isPass()) {
                oss << Design::ColorString(PASSFLAG, Design::GREEN);
            } else {
                oss  << Design::ColorString(fAILEDFLAG, Design::RED);
            }
        }else{
            if (isPass()) {
                oss << PASSFLAG;
            } else {
                oss  << fAILEDFLAG;
            }
        }
       
        return oss.str();
}


void Test::WriteStats(ostream &outfile)const{
    outfile << getTitle();
    const string subtitle = "Test Stat: ";
    outfile << subtitle;
    if(isPass()){
        outfile << PASSFLAG << "\n";
    }else{
        outfile << fAILEDFLAG << "\n\n";
    }
    
    outfile << data << "\n";
}
