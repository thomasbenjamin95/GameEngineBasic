#include "GameEngine.h"


using namespace std;

GameEngine::GameEngine()
{
}

GameEngine::~GameEngine()
{

}

void GameEngine::initialize(std::string file)
{
	//Declaring the Pointers
	renderSystem = new RenderSystem(); 
	fileSystem = new FileSystem();
	inputManager = new InputManager();
	assetManager = new AssetManager();
	gameObjectManager = new GameObjectManager();

	//JSON Load Funtions
	std::ifstream inputStream(file);
	std::string str((std::istreambuf_iterator<char>(inputStream)), std::istreambuf_iterator<char>());
	json::JSON gameSetting = json::JSON::Load(str);

	if (gameSetting.hasKey("GameEngine"))
	{
		json::JSON gameEngine = gameSetting["GameEngine"];

		if (gameEngine.hasKey("DefaultFile"))
		{
			std::string GameLevelJsonFile = gameEngine["DefaultFile"].ToString();
			std::ifstream inputStream2(GameLevelJsonFile);
			std::string str2((std::istreambuf_iterator<char>(inputStream2)), std::istreambuf_iterator<char>());
			json::JSON gameLevelJSON = json::JSON::Load(str2);
			json::JSON gameObjects = gameLevelJSON["GameObjects"];
			gameObjectManager->initialize(gameObjects);				//Passing the JSONObject to GameObjectManager Name, Components.
		}
	}
	if (gameSetting.hasKey("RenderSystem"))
	{
		json::JSON RenderSystemobj = gameSetting["RenderSystem"];
		std::string file_rendersystem = gameSetting["RenderSystem"].ToString();
	std:cout << file_rendersystem.c_str() << std::endl;
		renderSystem->initialize(RenderSystemobj);                     //Pass the JSONObject to RenderSystem to display Height, Width and FullScreen.
	}
}

void GameEngine::GameLoop()  //Wait for 10 seconds.
{
	clock_t stop;
	stop = clock() + 10 * CLOCKS_PER_SEC;
	std::cout << "Updating&Saving!" << std::endl;
	while (clock() < stop)
	{

	}

}

void GameEngine::display()
{
	//Displays the output
	std::cout << "Game Engine" << std::endl;
	std::cout << "Render System" << std::endl;
	renderSystem->display();
	std::cout << "File System" << std::endl;
	fileSystem->display();
	std::cout << "Input Manager" << std::endl;
	inputManager->display();
	std::cout << "Asset Manager" << std::endl;
	assetManager->display();
	std::cout << "GameObject Manager" << std::endl;
	gameObjectManager->display();
}
