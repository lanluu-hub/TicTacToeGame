/// @date 06-06-2025
/// @file Board.cpp
/// @author Lan Luu
#include "../include/Board.h"

Board::Board() : filledCells(0)
{
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            grid[row][col] = ' ';
        }
    }
}

void Board::drawBoard() const
{
    cout << "-------------" << endl;
    for (int row = 0; row < 3; ++row) {
        cout << "| ";
        for (int col = 0; col < 3; ++col) {
            cout << grid[row][col] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

bool Board::isValidMove(int row, int col) const
{
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && grid[row][col] == ' ');
}

void Board::makeMove(int row, int col, char symbol)
{
    if (isValidMove(row, col)) {
        grid[row][col] = symbol;
        filledCells++;  // Increment counter when a cell is filled
    }
}

bool Board::checkWin(char symbol) const
{
    // check rows
    for (int row = 0; row < 3; ++row) {
        if (grid[row][0] == symbol 
            && grid[row][1] == symbol
            && grid[row][2] == symbol) {
                return true;
            }
    }

    // check columns
    for (int col = 0; col < 3; ++col) {
        if (grid[0][col] == symbol
            && grid[1][col] == symbol
            && grid[2][col] == symbol) {
                return true;
            }
    }

    // check diagonals
    if (grid[0][0] == symbol
        && grid[1][1] == symbol
        && grid[2][2] == symbol) {
            return true;
        }
    
    if (grid[0][2] == symbol
        && grid[1][1] == symbol
        && grid[2][0] == symbol) {
            return true;
        }

    return false;
}

bool Board::isFull() const
{
    return filledCells == 9;
}

int Board::getFilledCellsCount() const
{
    return filledCells;
}
