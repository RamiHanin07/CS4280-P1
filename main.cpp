//Name: Rami Hanin
//Date: 1/26/2022
//Class: CS4280

#include <iostream>
#include <fstream>
#include <string>


#include "testScanner.h"
#include "scanner.h"
using namespace std;


int main(int argc, char *argv[]){

    //Variables
    string fileName = "";


    //Extracting command line arguments
    string argument = "";
    if(argv[1]){
        //cout << argv[1] << " arg" << endl;
        argument = string(argv[1]);
    }
    cout << argument << endl;

    //Dealing with command line argument conditionals
    if(argument != ""){
        if(argument != ">"){
            fileName = argument;
        }
        else{
            cout << "Error, unidentified argument" << endl;
        }
    }

    cout << fileName << endl;

    //Call testScanner
    testScan(fileName);

    return 0;
}