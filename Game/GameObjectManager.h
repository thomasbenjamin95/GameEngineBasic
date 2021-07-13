
#pragma once
#include<iostream>
#include "GameObject.h"
#include <list>

class GameObjectManager
{

private:
	std::list<GameObject*> gameobject;

public:
	GameObjectManager();
	~GameObjectManager();
	void initialize(json::JSON& gameobject);
	void update();
	void addGameObject(GameObject* component);
	void removeGameObject();
	void display();
};