#ifndef TOKENS_H
#define TOKENS_H

#include <string>
using namespace std;

const string alpha = "alphaTK";
const string digit = "digitTK";
const string keyword = "keywordTK";
const string identifier = "identifierTK";
const string oper = "operatorTK";
const string comment = "commentTK";
const string eof = "eofTK";

struct token{
    string tokenID;
    string tokenIstance;
    int lineNum;
};




#endif