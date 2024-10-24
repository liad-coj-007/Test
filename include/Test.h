#pragma once
#include <string>
#include <vector>
#include <algorithm> 
#include <sstream>
#include <fstream>
#include "../Exception/TestExcpetion/FileError.h"

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

    /**
     * @brief return the output of the test
     * @return string
     */
    string getOutput()const;

    /**
     * @brief return true if the test pass 
     * else return false
     * @return true/false
     */
    bool isPass()const;

    /**
     * @brief write to the file 
     * the stats of test
     * @param outfile - the file we write to
     */
    void WriteStats(ostream &outfile)const;

    /**
     * @brief return the test flag 
     * @param iscolored - if the user want it colored
     */
    string getTestFlag(const bool iscolored = false)const;

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
    void PassMsg(ostream &os)const;

    /**
     * @brief return the testname formated
     * as a title
     */
    string getTitle() const;

    /**
     * @brief compare two string and find the differnce between them
     * @param str1 - the first string we equal
     * @param str2 - the second string we equal
     * @return the diff between the strings
     */
    string compareStrings(const std::string& str1, 
    const std::string& str2);
};