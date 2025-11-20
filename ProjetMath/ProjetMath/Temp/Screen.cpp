#include "Screen.h"
#include "Mesh.h"
#include <iostream>

void Screen::ScreenSimulation()
{
    for (int i = 0; i < m_settingsScreen.m_height; i++)
    {
        for (int j = 0; j < m_settingsScreen.m_width; j++)
        {
            m_screen += '.';
        }
        m_screen += '\n';
    }
}

void Screen::Display()
{
    std::cout << "\n==== DISPLAY SCREEN ====\n" << std::endl;
    std::cout << m_screen << std::endl;
    std::cout << "\n==== END SCREEN ====\n" << std::endl;
    m_mesh.Debug();

}