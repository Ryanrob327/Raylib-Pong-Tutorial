#include "cpuPaddle.h"
#include <raylib.h>
#include <iostream> 



CpuPaddle::CpuPaddle(float x, float y, float width, float height, int speed):
    Paddle(x, y, width, height, speed)
{
}

void CpuPaddle::Update(float ball_y){
    if (y + (height/2) > ball_y){
        y -= speed;
    }
    else if (y + (height/2) <= ball_y){
        y += speed;
    }
}
