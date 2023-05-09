#ifndef PRINTHANGMAN_H
#define PRINTHANGMAN_H

#include "phrasesUsed.h"
#include "animation.h"


void printHangMan(std::string s, int timesPlayingLeft, std::string key) {
    int currentStatus = totalTime - timesPlayingLeft;
    switch (currentStatus) {
    case 10:
        playingGameOverSound();
        playAnimation(s, key);
    case 9:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|    |_|    |\n";
        std::cout<<"|    _|_    | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|     |     |\n";
        std::cout<<"|    /      |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 8:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|    |_|    |\n";
        std::cout<<"|    _|_    | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|     |     |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 7:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|    |_|    |\n";
        std::cout<<"|    _|_    | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 6:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|    |_|    |\n";
        std::cout<<"|    _|     | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 5:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|    |_|    |\n";
        std::cout<<"|    _      | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 4:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|    |_|    |\n";
        std::cout<<"|           | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 3:
        std::cout<<" ___________\n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|    |_     |\n";
        std::cout<<"|           | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|           | \n";
        std::cout<<"|           | \n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 2:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|    |      |\n";
        std::cout<<"|           | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 1:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|     _     |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    case 0:
        std::cout<<" ___________ \n";
        std::cout<<"|     |     |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           | ";
        for(int i=0; i<s.size(); i++) {
            std::cout<<s[i]<<' ';
        }
        std::cout<<'\n';
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|           |\n";
        std::cout<<"|___________|\n\n";
        break;
    }
}

#endif // PRINTHANGMAN_H
