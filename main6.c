#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    float posX = -100.0f;
    float velocity = 100.0f;
    int targetFPS = 60;

    InitWindow(screenWidth, screenHeight, "Atividade_06");
    SetTargetFPS(targetFPS);

    Texture2D sprite = LoadTexture("personagem.png");

    while (!WindowShouldClose())
    {
        
        posX += GetFrameTime() * velocity;

        if (posX > screenWidth)
        {
            posX = -sprite.width;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(sprite, posX, 10, WHITE);

        EndDrawing();
    }

    UnloadTexture(sprite);
    CloseWindow();

    return 0;
}
