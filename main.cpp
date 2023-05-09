#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <string>
#include "printFunctions.h"
#include "getInput.h"
#include "conductGame.h"
#include "loading.h"

void getUserRequestAndConductGame();

int main() {
    getUserRequestAndConductGame();
}

//get user's respond and conduct game
void getUserRequestAndConductGame() {
    std::string choice;
    do {
        getYesNoInput(choice);
        if(choice == "n") {
            printEndGameConsole();
        }
        else {
            loading();
            conductGame();
        }
        sleep(12);
    }
    while (choice!="n");
}
