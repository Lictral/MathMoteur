#pragma once
#include <vector>

class Mesh
{
public:
	Mesh();
	~Mesh();

	void Debug();
	void AddVertex(float x, float y, float z);
	void CreateTriangle();
	void CreateSquare();

private:
	std::vector<float> m_vertex;
	std::vector<float> m_allVertex;
};

