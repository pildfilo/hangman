#ifndef GETINPUT_H
#define GETINPUT_H

#include "phrasesUsed.h"
#include "printGameIntroduction.h"
#include<cstdlib>

//get letter input
bool checkValidLetter(std::string s) {
    return (s.size()==1 && isalpha(s[0])) ? true : false;
}
void getLetterInput(std::string &s) {
    int timesInput = 0;
    do {
        timesInput++;
        if(timesInput>=2) std::cout<<requestLetter2;
        else std::cout<<requestLetter1;
        getline(std::cin, s);
    }
    while (!checkValidLetter(s));
}

//get yes or no input
bool checkValidYesNo(std::string s) {
    return (s.size()==1 && (s[0]=='y' || s[0]=='n')) ? true : false;
}
void getYesNoInput(std::string &s) {
    int timesInput = 0;
    sleep(3);
    do {
        printGameIntroduction();
        timesInput++;
        if(timesInput>=2) std::cout<<'\n'<<introduction<<requestLetter2;
        else std::cout<<'\n'<<introduction<<startQuestion1;
        getline(std::cin, s);
        system("cls");
    }
    while (!checkValidYesNo(s));
}

#endif // GETINPUT_H

