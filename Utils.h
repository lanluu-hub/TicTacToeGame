/// @date 06-06-2025
/// @author Lan Luu
/// @file Utils
/// @brief useful functions to include into any project
#pragma once
#ifndef ULTIS_H
#define ULTIS_H
#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

inline void clearScreen() {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}

inline void pressEnterToContinue() {
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    clearScreen();
}

inline void pressEnterToContinue(const std::string& text) {
    std::cout << text;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    clearScreen();
}

inline void printError(const std::string & message) {
    std::cerr << "[ERROR] " << message << std::endl;
}

#endif