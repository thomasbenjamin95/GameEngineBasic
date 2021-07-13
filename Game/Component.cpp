#include "Component.h"

Component::Component()
{
}

Component::~Component()
{
}

void Component::initialize(json::JSON& iter)
{
	id = iter["id"].ToInt(); //Stores the JSON value to varible.
}


int Component::getComponentId()
{
	return id; //Returns the ID 
}

void Component::update()
{
}

void Component::display()
{
	std::cout << "\t\t\t\tid:" << getComponentId() << std::endl; //Displays the Component ID.
}
