#pragma once

#include <list>

using std::list;

class IGameObject;

class GameObjectManager
{
public:

    void Update(float _dt);
    void Draw();
    void AddObject(IGameObject* _object);
protected:

    list<IGameObject*> m_gameObject;
};

extern GameObjectManager gameObjectManager;

