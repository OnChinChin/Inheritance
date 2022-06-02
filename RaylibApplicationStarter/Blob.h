#pragma once

#include"IGameObject.h"

class Blob : public IGameObject
{

public:
    Blob(Vector2 _postion) : IGameObject(_postion, Vector2{ 0,0 }, nullptr)
    {
        color = GREEN;
    }

    virtual void Update(float _dt) override;
    virtual void Draw( ) override;
};

