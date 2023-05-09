#ifndef CONDUCTGAME_H
#define CONDUCTGAME_H

#include<vector>

//Check if the letter got is satisfied
bool check(std::string s, std::string c, std::vector<int> &addressGot, int &newAddress) {
    for(int i=0; i<s.size(); i++)
    {
        bool checkAddress = true;
        for(int j=0; j<addressGot.size(); j++)
        {
            if(i==addressGot[j])
                checkAddress = false;
        }
        if(checkAddress && s[i] == c[0])
        {
            addressGot.push_back(i);
            newAddress = i;
            return true;
        }
    }
}

//Get random word from DataList
std::string getRandomWord() {
    std::ifstream file("DataList.txt");
    std::string s;
    srand(time(NULL));
    int n = rand() % (MAX - MIN + 1) + MIN;
    while(n--) {
        getline(file, s);
    }
    file.close();
    getStandardKey(s);
    return s;
}

//Game Start
void conductGame() {
    std::string key;
    key = getRandomWord();
    int keyLength = key.size();
    std::vector<int> addressGot;
    int timePlaying = 10;
    std::string c;
    std::string currentResult="";
    for(int i=0; i<keyLength; i++){
        currentResult += "_";
    }
    printCurrentResult(currentResult, timePlaying, true, false, key); //print starting configuration
    while(addressGot.size() != keyLength) {
        bool playingSound = false;
        getLetterInput(c);
        int newAddress = -1;
        if(!check(key, c, addressGot, newAddress)) {
            timePlaying --;
        }
        else {
            playingSound = true;
            currentResult[newAddress]=c[0];
        }
        system("cls");
        printCurrentResult(currentResult, timePlaying, playingSound, true, key);
        printTimeLeft(timePlaying);
        if(timePlaying==0) {
            gameOver(key);
            break;
        }
        if(addressGot.size() == keyLength) {
            printWinnerConsole();
        }
    }
}

#endif // CONDUCTGAME_H
