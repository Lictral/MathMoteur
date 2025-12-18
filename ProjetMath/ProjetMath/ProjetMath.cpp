#include <iostream>
#include <windows.h>
#include <signal.h>
#include <chrono>
#include <thread>
#include "Settings.h"
#include "Screen.h"
#include "Mesh.h"

void InitConsole()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hConsole, &mode);
    SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
}

void ClearConsole()
{
    std::cout << "\x1b[2J";
    std::cout << "\x1b[H";
}

void SetCursorVisible(bool _visible)
{
    if (_visible)
    {
        std::cout << "\x1b[?25h";
    }
    else
    {
        std::cout << "\x1b[?25l";
    }
}

void OnKill(int _signum)
{
    ClearConsole();
    SetCursorVisible(true);
    exit(_signum);
}

int main(int argc, char** argv)
{
    signal(SIGINT, OnKill);

    InitConsole();
    ClearConsole();
    SetCursorVisible(false);

    Settings settings(argc, argv);
    Screen screen(settings);
    Mesh mesh(settings);
    mesh.Debug();
    mesh.GenerateTorus(4.f, 0.9f);
    //mesh.GenerateRectangle(10.f, 12.f);
    screen.Display(mesh);
    while (true)
    {
        std::cout << "\x1b[H";

        mesh.Rotate(settings.GetMeshRotationXPerFrame(), Axis::X);
        mesh.Rotate(settings.GetMeshRotationXPerFrame(), Axis::Y);
        mesh.Rotate(settings.GetMeshRotationXPerFrame(), Axis::Z);

        screen.Display(mesh);

        std::this_thread::sleep_for(std::chrono::microseconds(settings.GetFrameDuration()/5));
    }


    SetCursorVisible(true);
    return 0;
}