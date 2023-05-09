#ifndef PRINTFUNCTIONS_H
#define PRINTFUNCTIONS_H

#include<iostream>
#include<cctype>
#include "printHangMan.h"

//Print times left
void printTimeLeft(int n) {
    std::cout<<"You have "<<n<<" times left to try!\n";
}

//print current result
void printCurrentResult(std::string s, int timesLeft, bool playedStatus, std::string key) {
    printHangMan(s, timesLeft, key);
    if(timesLeft == totalTime && !playedStatus) {
        playingStartingSound();
        sleep(1);
    }
}

//print endgame to console
void printEndGameConsole() {
    std::cout<<endGame;
}

//print when game over
void gameOver(std::string key) {
    std::cout<<"GAME OVER :))"<<'\n';
    std::cout<<"KEYWORD is "<<key<<'\n';
    std::cout<<"Please wait...";
    system("cls");
}

//print when winning
void printWinnerConsole() {
    std::cout<<"CONGRATULATION"<<'\n';
    playingWinningSound();
    sleep(6);
    system("cls");
}



//get standard word
void getStandardKey(std::string &s) {
    s[0]=tolower(s[0]);
}



#endif // PRINTFUNCTIONS_H
