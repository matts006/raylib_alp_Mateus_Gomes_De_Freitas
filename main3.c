#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    const int squareSize = 100;
    int posX = 0;

    InitWindow(screenWidth, screenHeight, "Atividade_03");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        posX += 4;

        if (posX > screenWidth)
        {
            posX = -squareSize;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(posX, 250, squareSize, squareSize, BLUE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
