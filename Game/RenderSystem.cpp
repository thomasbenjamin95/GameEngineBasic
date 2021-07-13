#include "RenderSystem.h"
#include "GameEngine.h"

RenderSystem::RenderSystem()
{
}

RenderSystem::~RenderSystem()
{
}

void RenderSystem::initialize(json::JSON& iter)
{
	//Stores the values from JSON file to Varibles
	name = iter["Name"].ToString();
	width = iter["width"].ToInt();
	height = iter["height"].ToInt();
	fullscreen = iter["fullscreen"].ToBool();
}

void RenderSystem::update()
{
}

void RenderSystem::display()
{
	//Displays the Value
	std::cout << "\tName:" << name << std::endl;
	std::cout << "\tWidth:" << width << std::endl;
	std::cout << "\tHeight:" << height << std::endl;
	std::cout << "\tFullscreen:" << fullscreen << std::endl;
}
