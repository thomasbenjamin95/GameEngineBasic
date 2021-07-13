#include "GameObject.h"


GameObject::GameObject()
{
}

GameObject::~GameObject()
{
}

void GameObject::addComponent()
{
}

void GameObject::removeComponent()
{
}

void GameObject::initialize(json::JSON& iter)
{
	//Stores value from JSON to varible.
	name = iter["Name"].ToString();

	json::JSON comp = iter["Components"];
	for (auto& iter : comp.ArrayRange())
	{
		Component* component = new Component();
		component->initialize(iter);
		components.push_back(component); //Pushback object to list.
	}
}

void GameObject::update()
{
}

void GameObject::display()
{
	std::cout << "\t\tGame Object" << std::endl;
	std::cout << "\t\t\tname:" << getname() << std::endl;
	std::cout << "\t\t\tComponents" << std::endl;
	for (auto& it : components)
	{
		it->display(); //Call the Component Display and Prints the Output
	}

}

std::string& GameObject::getname()
{
	return name;
}
