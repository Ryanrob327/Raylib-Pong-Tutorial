#include <raylib.h>
#include "ball.h"
#include "paddle.h"
#include "cpuPaddle.h"
#include "globals.h"



int player_score = 0;
int opponent_score = 0;



int main() 
{    
    constexpr int screenWidth = 1280;
    constexpr int screenHeight = 800;
    
    Ball ball;
    Paddle player(screenWidth - 35, screenHeight / 2 - 25, 25, 120, 6);
    CpuPaddle opponent(35, screenHeight / 2 - 25, 25, 120, 6);
    
    InitWindow(screenWidth, screenHeight, "PONG");
    SetTargetFPS(60);
    


    while (WindowShouldClose() == false)
    {
        // Updating
        ball.Update();
        opponent.Update(ball.y);
        player.Update();
        
        // Collision checks
        if (CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{player.x, player.y, player.width, player.height})){ // Player collision
            ball.speedX *= -1;
        }
        if (CheckCollisionCircleRec(Vector2{ball.x, ball.y}, ball.radius, Rectangle{opponent.x, opponent.y, opponent.width, opponent.height})){ // Opponent collision
            ball.speedX *= -1;
        }



        BeginDrawing();

        // Drawing
        ClearBackground(BLACK);
        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);
        ball.Draw();
        opponent.Draw();
        player.Draw();
        DrawText(TextFormat("%i",opponent_score), screenWidth/4, 20, 80, WHITE);
        DrawText(TextFormat("%i",player_score), 3*screenWidth/4, 20, 80, WHITE);
        EndDrawing();
    }
    
    CloseWindow();
}