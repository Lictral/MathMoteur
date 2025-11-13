#pragma once
#include <vector>

class Mesh
{
public:
	Mesh();
	~Mesh();

	void Debug();
	void AddVertex(float x, float y, float z);
	void CreateMesh();
	void DisplayVertex();
	void CreateTriangle();
	void CreateSquare();

private:
	std::vector<float> m_vertex;
	int m_vertexCount;
	std::vector<float> m_allVertex;
};

