#include "paddle.h"
#include <raylib.h>



Paddle::Paddle(float x, float y, float width, float height, int speed):
    x(x),
    y(y),
    width(width),
    height(height),
    speed(speed)
{
}

void Paddle::Draw() const
{
    DrawRectangle(x, y, width, height, WHITE);
}

void Paddle::Update(){
    if (IsKeyDown(KEY_UP) && (y >= 0)){
        y = y - speed;
    }
    if (IsKeyDown(KEY_DOWN)  && ((y + height) <= GetScreenHeight())){
        y = y + speed;
    }
}
