#pragma once
#include <vector>
#include "Mesh.h"

class Settings;

class Screen
{
    public:
    Screen(Settings const& settings);
    void Display() const;
    void Display(Mesh const& mesh);

    private:
    int m_width;
    int m_height;
    std::vector<char> m_pixels;
};