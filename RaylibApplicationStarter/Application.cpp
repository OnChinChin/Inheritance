#include "Application.h"

#include <raylib.h>

#include "GameStateManager.h"
#include"GameObjectManager.h"

#include "Assets.h"
#include "Config.h"

#include"Player.h"

Application::Application()
{
	m_gameStateManager = new GameStateManager();
	windowWidth = config.GetIntValue(PROGRAM_CATEGORY, "width");
	windowHeight = config.GetIntValue(PROGRAM_CATEGORY, "height");

	gameObjectManager.AddObject(new Player);

}

void Application::Run()
{
	InitWindow(windowWidth, windowHeight, config.GetTextValue(PROGRAM_CATEGORY, "name"));

	Assets::Load();
	Start();

	while (!WindowShouldClose())
	{
		Update(GetFrameTime());

		BeginDrawing();
		ClearBackground(RAYWHITE);
		Draw();
		EndDrawing();
	}

	OnDestroy();
	Assets::Unload();

	CloseWindow();
}

void Application::Start()
{
	// Runs before the first update loop of the application
}

void Application::Update(float _dt)
{
	m_gameStateManager->Update(_dt);
	gameObjectManager.Update(_dt);
}

void Application::Draw()
{
	m_gameStateManager->Draw();
	gameObjectManager.Draw();
}

void Application::OnDestroy()
{
	// Runs after the update loop has been exited
}
