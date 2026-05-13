#include "ball.h"
#include <raylib.h>
#include "globals.h"



Ball::Ball() 
    : x(640)
    , y(400)
    , speedX(5)
    , speedY(5)
    , radius(15) 
{
}

void Ball::Update() 
{
    x += speedX;
    y += speedY;
    
    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();
    
    if ((x + radius >= screenWidth)) { // side wall collision for points
        opponent_score++;
        ResetBall();
    }
    if ((x - radius <= 0)){
        player_score++;
        ResetBall();
    }
    
    if ((y + radius >= screenHeight) || (y - radius <= 0)) { // top-bottom wall collision changes direction
        speedY *= -1;
    }
}

void Ball::Draw() const
{
    DrawCircle(x, y, radius, WHITE);
}

void Ball::ResetBall(){
    x = GetScreenWidth()/2;
    y = GetScreenHeight()/2;

    int speed_choices[2] = {-1,1};
    speedX *= speed_choices[GetRandomValue(0,1)];
    speedY *= speed_choices[GetRandomValue(0,1)];
}