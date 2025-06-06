/// @date 06-06-2025
/// @file Player.h
/// @author Lan Luu
#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player {
    public:
        // constructor
        Player(char sym = 'X', string n = "Player X");

        // Getter methods
        char getSymbol() const;
        string getName() const;
        
    private:
        char symbol;
        string name;
};

#endif