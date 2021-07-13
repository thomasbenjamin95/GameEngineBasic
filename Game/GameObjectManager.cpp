#include "GameObjectManager.h"
#include "GameEngine.h"
#include "json.hpp"

GameObjectManager::GameObjectManager()
{
}

GameObjectManager::~GameObjectManager()
{
}
void GameObjectManager::initialize(json::JSON& gameobject)
{
	for (auto& IdComp : gameobject.ArrayRange())
	{
		GameObject* go = new GameObject();
		go->initialize(IdComp);  //Pass the ID and Components to GameObject Class. 
		addGameObject(go);       //Push the elements to list.
	}
}

void GameObjectManager::update()
{
}

void GameObjectManager::addGameObject(GameObject* component)
{
	gameobject.push_back(component);
}

void GameObjectManager::removeGameObject()
{
}

void GameObjectManager::display()
{
	std::cout << "\tGame Objects:" << std::endl;
	for (auto& it : gameobject)
	{
		it->display();  //Calls the Display Method in the GameObjects class.
	}
}
