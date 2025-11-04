#include <iostream>
#include <ddkernel.h>

int main()
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
    
    int height = 20;
    int width = 100;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

        }
    }


}

