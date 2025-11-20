#include "Mesh.h"
#include <iostream>

Mesh::Mesh()
{

}

Mesh::~Mesh()
{

}

void Mesh::AddVertex(float x, float y, float z)
{
	m_vertex.push_back(x);
	m_vertex.push_back(y);
	m_vertex.push_back(z);
}

void Mesh::CreateMesh()
{
	while (m_vertex.size() < 12)
	{
		AddVertex(0, 0, 0);
	}
}

void Mesh::DisplayVertex()
{
	m_vertexCount++;
	std::cout << "\nVertex";
	std::cout << m_vertexCount;
	std::cout << " : {";
	for (int i = 0; i < m_vertex.size(); i++)
	{
		if (i % 3 == 0 && i != 0)
		{
			m_vertexCount++;
			std::cout << "},\n";
			std::cout << "\nVertex";
			std::cout << m_vertexCount;
			std::cout << " : {";
			std::cout << m_vertex[i];
			std::cout << ", ";
		}
		else
		{
			std::cout << m_vertex[i];
			int temp = i + 1;
			if (temp % 3 != 0)
				std::cout << ", ";
		}
		if (m_vertex.size() == i + 1)
			break;
	}
	std::cout << "}\n";
}


void Mesh::Debug()
{
	//AddVertex(12, -5, 0.5);
	//AddVertex(1, 7, -2.8);
	//AddVertex(1, 7, -2.8);
	//AddVertex(1, 7, -2.8);
	CreateMesh();
	DisplayVertex();
}
