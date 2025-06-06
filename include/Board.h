/// @date 06-06-2025
/// @file Board.h
/// @author Lan Luu
#ifndef BOARD_H
#define BOARD_H
#include <iostream>

using namespace std;

// Board class to manage game board
class Board {
    public:
        // constructor to initialize the board
        Board();

        // Method to display the board
        void drawBoard() const;

        // Method to check if a move is valid
        bool isValidMove(int row, int col) const;

        // Method to make a move
        void makeMove(int row, int col, char symbol);

        // Method to check for a win
        bool checkWin(char symbol) const;

        // Method to check if board is full using counter
        bool isFull() const;

        // Method to get the number of filled Cells
        int getFilledCellsCount() const;

    private:
        char grid[3][3];
        int filledCells;    // counter for filled cells
};

#endif