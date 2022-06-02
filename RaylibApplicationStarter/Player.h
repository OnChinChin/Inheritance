#pragma once

#include "IGameObject.h"

class Player : public IGameObject
{

public:

    Player() : IGameObject(Vector2{0,0}, Vector2{0,0}, nullptr) 
    {
        color = RED;
    }

    virtual void Update(float _dt) override;
    virtual void Draw() override;

};

