#pragma once
#include<iostream>
#include "json.hpp"

class Component
{
private:
	int id;

public:
	Component();
	~Component();
	void initialize(json::JSON&);
	int getComponentId();
	void update();
	void display();
};