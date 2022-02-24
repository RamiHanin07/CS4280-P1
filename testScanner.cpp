#ifndef TESTSCANNER_CPP
#define TESTSCANNER_CPP

#include "testScanner.h"
#include "scanner.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void testScan(string fileName){
    cout << "testScanner()" << endl;
    ifstream file(fileName);
    string line;
    string word;
    int lineNum = 0;
    while(getline(file, line)){
        istringstream stream(line);
        while(stream >> word){
            scanner(word, lineNum);
        }
        lineNum++;
    }
    cout << "eofTK" << " ; " << lineNum << endl;
}


#endif
