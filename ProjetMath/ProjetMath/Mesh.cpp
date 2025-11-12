#include "Mesh.h"

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

void Mesh::Debug()
{

}
