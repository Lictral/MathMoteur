#include <iostream>
#include <ddkernel.h>
#include <string>
#include <cstdlib>
#include "Settings.h"

int main(int argc, char* argv[])
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hConsole, &mode);
    SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

    std::cout << "\033[?25l";       // Cursor invisible
    //std::cout << "\033[?25h";     // Cursor visible
    std::cout << "Hello World!\n";
    std::cout << "\033[2J";         // Erase console
    std::cout << "\033[H";          // Home position
    
    if (argc < 4)
    {
        std::cout << "you need at least 1 or 2 command argument to use" << std::endl;
        return false;
    }

    //if (argv[1] != "-h")
    //{
    //    std::cout << "you need to write the command -h" << std::endl;
    //    return false;
    //}

    //if (argv[3] != "-w")
    //{
    //    std::cout << "you need to write the command -w" << std::endl;
    //    return false;
    //}

    Settings settings(argc, argv);
    settings.ScreenSimulation();
    settings.Display();

}

