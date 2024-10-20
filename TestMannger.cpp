#include "TestMannger.h"
#include <iomanip> // Include this header for std::setprecision
#include <vector>

TestMannger::TestMannger(){
    numoftestpass = 0;
}

TestMannger& TestMannger::getInstance(){
    static TestMannger testmannger;
    return testmannger;
}


/**
 * @brief Return all the file data.
 * @param filename - The name of the file.
 * @return Contents of the file as a string.
 */
std::string readFileToString(const std::string& filename) {
    std::ifstream readfile(filename, std::ios::in | std::ios::ate); // Open file in read mode and seek to the end

    // Check if the file opened successfully
    if (!readfile) {
        throw FileError(filename);
    }

    std::streamsize size = readfile.tellg(); // Get the size of the file
    readfile.seekg(0); // Seek back to the beginning

    std::string content(size, ' '); // Create a string with the appropriate size
    readfile.read(&content[0], size); // Read the file content into the string

    return content; // Return the content
}

/**
 * @brief retturn a test name formatted
 * @param name - the name that need to formatted
 * @return formated string
 */
const string testformat = "Test ";
string TestMannger::getTestName(const string name){
    string formatname;

    if(name == ""){
        int size = data.size()+1;    
        formatname =  testformat + to_string(size);
    }else{
        formatname = name;
    }

    if(data.find(formatname) != data.end()){
        throw InvaildName(formatname);
    }
    return formatname;  
}


void  TestMannger::AddTest(const string &output,const string &expected_output_path,const string &testname){
    const  string format_testname = getTestName(testname);
    string expected_output = readFileToString(expected_output_path);
    AddBenchMark(output,expected_output,format_testname);
}


void TestMannger::AddBenchMark(const string &output,const string &expected,
    const string &testname){
        data[testname] = Test(testname,output,expected);
        numoftestpass += data[testname].isPass();
}

void TestMannger::PrintTest(const string &testname) {
    if(data.find(testname) == data.end()){
        throw TestNotExsit(testname);
    }

    cout << data[testname] << endl;
}

const string test_file_format = ".test_banchmark";
void TestMannger::WriteTest(const string &testname) {
  

    if(!(data.find(testname) != data.end())){
        throw TestNotExsit(testname);
    }

    const string block =
    "----------------------------------------";

    string path = testname + test_file_format;
    ofstream outFile(path);
    if (!outFile) {
        throw FileError(path);
    }
    // Write the string to the file
    outFile << block << "\n\n";
    outFile << data[testname].getOutput();
    outFile << "\n" << block << "\n";
    outFile.close();
}

double TestMannger::GetPassTestRate()const {
    if(!data.size()){
        throw DivideByZero();
    }

    const int maxprecent = 100;
    return ((double)numoftestpass/data.size())*maxprecent;
}

ostream& operator<<(ostream &os,const TestMannger &testmannger){
    const string newline = "\n";
     os << "we have " << testmannger.numoftestpass << " succeed " << "out of " 
     << testmannger.data.size() << newline;
     os  << "The Pass Rate: ";

     if(testmannger.data.size()){
         os << fixed << std::setprecision(2) << 
         testmannger.GetPassTestRate() <<"%"<< newline;
     }else{
        os << "[DNE]" <<newline;
     }

     for(const auto& pair: testmannger.data){
        os << pair.second << newline;
     }

     return os;
}


