#pragma once
#include <string>

class Settings
{
public :
	Settings();
	Settings(int argc, char* argv[]);
	void ScreenSimulation();
	void Display();

private : 
	int m_height;
	int m_width;

	std::string m_commandHeight;
	std::string m_commandWidth;
	std::string m_screen;
	int m_argc;
};

