/// @date 06-06-2025
/// @file Player.cpp
/// @author Lan Luu
#include "../include/Player.h"

// Player class to represent a player in game
Player::Player(char sym, string n) : symbol(sym), name(n)
{
}

char Player::getSymbol() const
{
    return symbol;
}

string Player::getName() const
{
    return name;
}
