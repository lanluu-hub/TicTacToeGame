# 🎮 TicTacToeGame in C++

A simple two-player Tic-Tac-Toe game implemented in C++. The game runs in the terminal, offering an interactive experience where two players alternate turns on a classic 3x3 grid.

## 📋 Game Rules

- The game is played on a 3x3 grid.
- Player 1 uses `X` and Player 2 uses `O`.
- Players take turns placing their symbol in an empty cell.
- The first player to align three of their symbols **horizontally**, **vertically**, or **diagonally** wins the game.
- The game ends in a **draw** if all cells are filled and no player has formed a winning line.

## 🚀 Features

- Designed for **two players**.
- Fully interactive terminal-based gameplay.
- Input validation to prevent invalid or duplicate moves.
- Real-time board updates after each turn.
- Win and draw detection logic built-in.

## 🧩 Components

### 1. Game Board
Managed by the `Board` class:
- A 3x3 grid (`char[3][3]`) to represent the game state.
- A move counter to track how many cells have been filled.
- Core methods include:
  - `drawBoard()` – Displays the current board.
  - `isValidMove(int row, int col)` – Validates a move.
  - `makeMove(int row, int col, char symbol)` – Places a move on the board.
  - `checkWin(char symbol)` – Checks if the player has won.
  - `isFull()` – Checks for a draw condition.

### 2. Player Management
Represented by the `Player` class:
- Stores the player's name.
- Stores the player's symbol (`X` or `O`).

### 3. Game Logic
Controlled by the `TicTacToe` class:
- Manages the game loop and player turns.
- Processes user input and validates moves.
- Checks win/draw conditions.
- Ends the game with appropriate messages.

## 🛠 How It Works

```cpp
Player1: X
Player2: O

Turn 1 - Player1 enters position (1,1)
Turn 2 - Player2 enters position (1,2)
```

## Input Validation
✅ Valid input: Cell is within bounds and not already occupied.
❌ Invalid input: Cell is out of bounds or already filled.

## 📦 Build and Run
Compile
```bash
g++ -std=c++17 -o tictactoe main.cpp Board.cpp Player.cpp TicTacToe.cpp
```

Run
```bash
./tictactoe
```

```css
TicTacToeGame/
├── include/
│   ├── Board.h
│   ├── Player.h
│   └── TicTacToe.h
├── src/
│   ├── Board.cpp
│   ├── Player.cpp
│   └── TicTacToe.cpp
├── main.cpp
└── README.md
```

## ✍️ Author
Created by Lan Luu
Part of a C++ learning or system design project.


