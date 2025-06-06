/// @date 06-06-2025
/// @file main.cpp
/// @author Lan Luu
#include <iostream>
#include <string>
#include "include/Player.h"
#include "include/Board.h"
#include "include/TicTacToe.h"
#include "Utils.h"

int
main() {
    // Creating game object
    TicTacToe game;

    // Starting the game
    game.play();
    return 0;
}