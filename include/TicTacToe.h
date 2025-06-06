/// @date 06-06-2025
/// @file TicTacToe.h
/// @author Lan Luu
#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <iostream>
#include "Player.h"
#include "Board.h"
#include "../Utils.h"

// Game class to manage the game logic
class TicTacToe {
    public:
        // constructor
        TicTacToe();

        // Method to get the current player
        Player& getCurrentPlayer();
        
        // Method to switch turns
        void switchTurn();

        // Method to play the game
        void play();

    private:
        Board board;
        Player players[2];
        int currentPlayerIndex;
};

#endif