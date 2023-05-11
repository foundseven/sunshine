#include "rlImGui.h"
#include "raylib.h"
#include <vector>

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720




// main game loop
int main(void)
{

    //init

    //drawing the screen
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Sunshine");
    
    //target frame rate
    SetTargetFPS(60);

    //call on the ball
    Vector2 ballPos = { (float)SCREEN_WIDTH / 2, (float)SCREEN_HEIGHT / 2 };


    while (!WindowShouldClose()) //Detect the window closing or the ESC key
    {


        //update
        if (IsKeyDown(KEY_RIGHT)) ballPos.x += 2.0f;
        if (IsKeyDown(KEY_LEFT)) ballPos.x -= 2.0f;
        if (IsKeyDown(KEY_UP)) ballPos.y -= 2.0f;
        if (IsKeyDown(KEY_DOWN)) ballPos.y += 2.0f;


        //draw
        BeginDrawing();

            ClearBackground(RAYWHITE);

            //drawing text onto the screen
            DrawText("Hello World!", 16, 9, 20, RED);


            //circle shapes
            DrawCircle(SCREEN_WIDTH / 5, 120, 35, DARKBLUE);
            DrawCircleGradient(SCREEN_WIDTH / 5, 220, 60, DARKGREEN, GREEN);


            //rectangle shapes
            DrawRectangle(SCREEN_WIDTH / 4, 100, 120, 60, RED);
            DrawRectangleGradientH(SCREEN_WIDTH / 4, 170, 180, 130, DARKBLUE, LIGHTGRAY);
        
            //circle for player to move with arrow keys
            DrawCircleV(ballPos, 50, LIGHTGRAY);
            
            //end draw
            EndDrawing();


    }

    CloseWindow();
    return 0;
}