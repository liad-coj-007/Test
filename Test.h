#pragma once
#include <string>
#include <vector>
#include <algorithm> 
#include <sstream>
using namespace std;



class Test{
public:
    /**
     * @brief build a test object
     * check if the output == expected
     * @param output - output string
     * @param testname - the name of the test
     * @param expected - expected string
     */
    Test(const string &testname = "",const string &output = "",
    const string &expected = "");
private:
    bool testpass;
    string testname;
    string data;
    static const string ACTUALFLAG;
    static const string EXPECTED;
    static const string DIFF;
    static const string PASSFLAG;
    static const string fAILEDFLAG;

    
    /**
     * @brief do operator<<
     * @param os - the os we use 
     * @param test - the test we <<
     * @return ostream we used
     */
    friend ostream& operator<<(ostream &os ,const Test &test);

    /**
     * @brief format the data that represented to the user
     * @param output - the output we got
     * @param expected - the expected we got
     */
    void FormatData(const string &output,const string &expected);

    /**
     * @brief print use the os 
     * if the test passed
     */
    void IsPass(ostream &os)const;

    /**
     * @brief add title to print
     * @param os the os we use
     */
    void AddTitle(ostream &os) const;

    /**
     * @brief compare two string and find the differnce between them
     * @param str1 - the first string we equal
     * @param str2 - the second string we equal
     * @return the diff between the strings
     */
    string compareStrings(const std::string& str1, 
    const std::string& str2);
};