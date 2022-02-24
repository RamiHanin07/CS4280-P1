#ifndef TESTSCANNER_CPP
#define TESTSCANNER_CPP

#include "testScanner.h"
#include "scanner.h"
#include <iostream>
#include <fstream>

using namespace std;

void testScan(string fileName){
    cout << "testScanner()" << endl;
    ifstream file(fileName);
    string word;
    while(file >> word){
        scanner(word);
    }
}


#endif
