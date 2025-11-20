#include "Settings.h"
#include <iostream>

Settings::Settings()
{
    m_argc = 3;
    m_height = 20;
    m_width = 100;
    m_commandHeight = "-h";
    m_commandWidth = "-w";
}

Settings::Settings(int argc, char* argv[])
{
	m_argc = argc;
    m_commandHeight = argv[1];
	m_height = std::atoi(argv[2]);
    m_commandWidth = argv[3];
	m_width = std::atoi(argv[4]);
    m_screen = '\n';
}

int Settings::GetScreenHeight()
{
    return m_height;
}

int Settings::GetScreenWidth()
{
    return m_width;
}


