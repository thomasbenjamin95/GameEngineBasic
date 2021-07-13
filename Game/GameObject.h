#pragma once
#include<iostream>
#include <fstream>
#include <time.h>
#include "Component.h"
#include "json.hpp"
#include <list>

class GameObject
{
private:
	std::list<Component*> components;
	std::string name;
public:
	GameObject();
	~GameObject();
	void addComponent();
	void removeComponent();
	void initialize(json::JSON&);
	void update();
	void display();
	std::string& getname();
};