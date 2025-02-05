#include "TestMannger.h"
#include <iomanip> // Include this header for std::setprecision
#include <vector>
#include "Design.h"

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
    const string format_testname = getTestName(testname);
    string expected_output = readFileToString(expected_output_path);
    AddBenchMark(output,expected_output,format_testname);
}


void TestMannger::AddBenchMark(const string &output,const string &expected,
    const string &testname){
        data[testname] = Test(testname,output,expected);
        numoftestpass += data[testname].isPass();
}

void TestMannger::PrintTest(const string &testname) const {
    auto it = data.find(testname);
    if(it == data.end()){
        throw TestNotExsit(testname);
    }

    cout << it->second << endl;
}


void TestMannger::WriteTestsToFile(const string &path) const{
    ofstream file(path);
    if (!file) {
        throw FileError(path);
    }

    PrintFailed(file,false);
    PrintBenchMark(file,false);
    file.close();
}


const string test_file_format = ".test_banchmark";
void TestMannger::WriteTest(const string &testname) const {
  
    auto it = data.find(testname);
    if(!(it != data.end())){
        throw TestNotExsit(testname);
    }

    string path = testname + test_file_format;
    ofstream outFile(path);
    if (!outFile) {
        throw FileError(path);
    }

    it->second.WriteStats(outFile);
    outFile.close();
}

double TestMannger::GetPassTestRate()const {
    if(!data.size()){
        throw DivideByZero();
    }

    const int maxprecent = 100;
    return ((double)numoftestpass/data.size())*maxprecent;
}

string TestMannger::FormatRate()const{
    ostringstream stream;
    const double MID = 75;
    const double LOW = 50;


    double rate = GetPassTestRate();
    stream << fixed << setprecision(2) << rate 
    << "%\n";  
    if (rate >= MID){
        return Design::ColorString(stream.str(),Design::GREEN);  
    }

    if(rate >= LOW){
        return Design::ColorString(stream.str(),Design::ORANGE); 
    }

    return Design::ColorString(stream.str(),Design::RED); 
}


string TestMannger::getStat(const bool iscolored)const{
    std::ostringstream os; // Create an output string stream
    os << "We have " << numoftestpass << " succeeded out of " 
       << data.size() << "\n"; // Use \n for newline

    os << "The Pass Rate: ";

    if (data.size()) {
        if(iscolored){
            os << FormatRate() ; 
        }else{
            os << fixed << setprecision(2) << GetPassTestRate();
        }
    } else {
        os << "[DNE]\n"; // Use \n for newline
    }
    
    return os.str(); 
}


void TestMannger::PrintBenchMark(ostream &os,
const bool iscolored) const {
    const string newline = "\n";
    const string testdash = "| ";
    if(iscolored){
        os <<  Design::FormatBigTitle("TESTS BENCHMARK",
        Design::ORANGE);
    }else{
        os << Design::FormatBigTitle("TESTS BENCHMARK");
    }
  
    os << getStat(iscolored) <<"\n";
    for(const auto& pair: data){
        os << testdash << pair.second.getTestFlag(iscolored) << newline; 
    }
    os << "\n" << Design::Border() << "\n";
}

void TestMannger::PrintFailed(ostream &os,
const bool iscolored) const {
    if(numoftestpass == data.size()){
        return;
    }

    if(iscolored){
        os << Design::FormatBigTitle("FAILED TESTS",
        Design::RED);
        for(const auto & pair: data){
            if(!pair.second.isPass()){
                os << pair.second << "\n";
            }
        }
    }else{
        os << Design::FormatBigTitle("FAILED TESTS");
        for(const auto & pair: data){
            if(!pair.second.isPass()){
                pair.second.WriteStats(os);
                os << "\n";
            }
        }
    }

    os << "\n" <<Design::Border() << "\n\n";
}

ostream& operator<<(ostream &os,const TestMannger &testmannger){
    testmannger.PrintFailed(os);
    testmannger.PrintBenchMark(os);
    return os;
}


