#include "Player.h"

#include"raylib.h"

#include"Blob.h"
#include"GameObjectManager.h"

void Player::Update(float _dt)
{
    position.x += ((IsKeyDown(KEY_D) - IsKeyDown(KEY_A)) * 0.1f) * _dt;
    position.y += ((IsKeyDown(KEY_S) - IsKeyDown(KEY_W)) * 0.1f) + _dt;

    if (IsKeyDown(KEY_SPACE))
    {
        gameObjectManager.AddObject(new Blob(position));
    }
}

void Player::Draw()
{
    DrawCircleV(position, 20, color);
}
