#pragma once

#include<iostream>

#include "RenderSystem.h"
#include "Filesystem.h"
#include "Inputmanager.h"
#include "AssetManager.h"
#include "Component.h"
#include "json.hpp"



class GameEngine
{
private:
	RenderSystem* renderSystem;
	FileSystem* fileSystem;
	InputManager* inputManager;
	AssetManager* assetManager;
	GameObjectManager* gameObjectManager;

public:
	GameEngine();
	~GameEngine();
	void initialize(std::string a);
	void GameLoop();
	void display();

};