#include "Light.h"
#include "Settings.h"

Light::Light(Settings const& settings)
{
	m_light.lx = settings.GetLightDirectionX();
	m_light.ly = settings.GetLightDirectionY();
	m_light.lz = settings.GetLightDirectionZ();

}