#pragma once
#include "Settings.h"

class Screen
{
public:

	void ScreenSimulation();
	void Display();

private:
	std::string m_screen;
	Settings m_settingsScreen;
};

