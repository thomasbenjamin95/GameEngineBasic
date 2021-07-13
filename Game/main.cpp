#include <iostream>
#include <fstream>
#include "GameEngine.h"
#include "json.hpp"


int main()
{
	//Created a pointer to GameEngine(Class-Bundle) in Heap (Memory).
	//Using this pointer to call the public method "initialize()" from GameEngine Class.
	//Displays the Output
	//Calls the GameLoop - Delays the programs by 10 sec to finish. 
	GameEngine* gameEngine = new GameEngine();
	gameEngine->initialize("GameSettings.json");
	gameEngine->display();
	gameEngine->GameLoop();

}