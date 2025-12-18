#pragma once
#include "Mesh.h"

class Settings;

class Light
{
public : 
    struct LightDir
    {
        float lx;
        float ly;
        float lz;
    };

	Light(Settings const& settings);
    Vertex const& GetNormalizeLight() { return m_vertices; }

private:
    Vertex m_vertices;
    LightDir m_light;
};

