/// @date 06-06-2025
/// @file TicTacToe.cpp
/// @author Lan Luu
#include "../include/TicTacToe.h"

TicTacToe::TicTacToe() : currentPlayerIndex(0)
{
    players[0] = Player('X', "Player X");
    players[1] = Player('O', "Player O");
}

Player &TicTacToe::getCurrentPlayer()
{
    return players[currentPlayerIndex];
}

void TicTacToe::switchTurn()
{
    currentPlayerIndex = (currentPlayerIndex + 1) % 2;
}

void TicTacToe::play()
{
    int row, col;
    cout << "Welcome to tic-tac-toe!" << endl;
    pressEnterToContinue("Press Enter to Start the game. . .");

    while (!board.isFull()) {
        clearScreen();
        // Display the board
        board.drawBoard();

        Player& currentPlayer = getCurrentPlayer();

        // Get valid input
        while (1) {
            cout << currentPlayer.getName() << " (" << currentPlayer.getSymbol() 
                 << "), enter row (1-3) and column (1-3): ";
            cin >> row >> col;
            row--; col--;   // Convert to 0-indexed

            if (board.isValidMove(row, col)) {
                break;
            } else {
                cout << "Invalid move. Try again." << endl;
            }
        }

        // Make move
        board.makeMove(row, col, currentPlayer.getSymbol());

        // Check for win
        if (board.checkWin(currentPlayer.getSymbol())) {
            clearScreen();
            board.drawBoard();
            cout << currentPlayer.getName() << " wins!" << endl;
            return;
        }

        // Switch turns
        switchTurn();
    }

    // Game ended in a draw
    clearScreen();
    board.drawBoard();
    cout << "It's a draw!" << endl;
}
