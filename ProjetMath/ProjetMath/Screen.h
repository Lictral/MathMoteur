#pragma once
#include "Settings.h"
#include "Mesh.h"

class Screen
{
public:

	void ScreenSimulation();
	void Display();

private:
	std::string m_screen;
	Settings m_settingsScreen;
	Mesh m_mesh;
};

