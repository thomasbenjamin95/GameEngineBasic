#pragma once

#include<iostream>
#include "json.hpp"

class RenderSystem
{
public:
	RenderSystem();
	~RenderSystem();
	void initialize(json::JSON&);
	void update();
	void display();

private:
	std::string name;
	int width;
	int height;
	bool fullscreen;
};