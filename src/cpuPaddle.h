#pragma once
#include "paddle.h"



class CpuPaddle : public Paddle {
    public:
        CpuPaddle(float x,
        float y,
        float width,
        float height,
        int speed);

        void Update(float ball_y);
};