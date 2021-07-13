#pragma once
#include<iostream>
#include "InputManager.h"
#include "GameObjectManager.h"

class AssetManager
{

public:
	AssetManager();
	~AssetManager();
	void initialize();
	void update();
	void display();

};