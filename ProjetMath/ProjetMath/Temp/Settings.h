#pragma once
#include <string>

class Settings
{
public :
	Settings();
	Settings(int argc, char* argv[]);
	int GetScreenHeight();
	int GetScreenWidth();

private : 
	friend class Screen;

	int m_height;
	int m_width;
	int m_argc;

	std::string m_commandHeight;
	std::string m_commandWidth;
	std::string m_screen;
};

