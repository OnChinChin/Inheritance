#include "GameObjectManager.h"

#include"IGameObject.h"

GameObjectManager gameObjectManager;

void GameObjectManager::Update(float _dt)
{
    for (auto iter = m_gameObject.begin(); iter != m_gameObject.end(); iter++)
    {
        (*iter)->Update(_dt);
    }
}

void GameObjectManager::Draw()
{
    for (auto iter = m_gameObject.begin(); iter != m_gameObject.end(); iter++)
    {
        (*iter)->Draw();
    }
}

void GameObjectManager::AddObject(IGameObject* _object)
{
    m_gameObject.push_back(_object);
}
