#pragma once



class Ball
{
public:
    Ball();
    void Update();
    void Draw() const;
    void ResetBall();

    float x, y;
    float speedX, speedY;
    int radius;
};