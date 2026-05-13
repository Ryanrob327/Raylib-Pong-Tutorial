#pragma once



class Paddle{
    public:
        Paddle(float x,
        float y,
        float width,
        float height,
        int speed);

        void Draw() const;
        void Update();

        float x,y;
        float width,height;
        int speed;
};