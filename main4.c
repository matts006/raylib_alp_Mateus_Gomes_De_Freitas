#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    const int squareSize = 100;
    int posX = 0;
    int targetFPS = 60;

    InitWindow(screenWidth, screenHeight, "Atividade_04");
    SetTargetFPS(targetFPS);

    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_ONE))
        {
            targetFPS = 10;
            SetTargetFPS(targetFPS);
        }
        else if (IsKeyPressed(KEY_TWO))
        {
            targetFPS = 30;
            SetTargetFPS(targetFPS);
        }
        else if (IsKeyPressed(KEY_THREE))
        {
            targetFPS = 60;
            SetTargetFPS(targetFPS);
        }

        posX++;
        if (posX > screenWidth)
        {
            posX = -squareSize;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Press 1=10 FPS, 2=30 FPS, 3=60 FPS", 10, 10, 20, DARKGRAY);
        DrawText(TextFormat("FPS atual: %i", targetFPS), 10, 40, 20, DARKGRAY);
        DrawText("10 = mais lento, 60 = mais suave", 10, 70, 20, DARKGRAY);

        DrawRectangle(posX, 200, squareSize, squareSize, BLUE);
        DrawFPS(10, 100);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
