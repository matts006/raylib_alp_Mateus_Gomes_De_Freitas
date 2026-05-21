#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Atividade_05");

    Texture2D personagem = LoadTexture("personagem.png");
    Texture2D vilao = LoadTexture("vilao.png");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTexture(personagem, 100, 120, WHITE);
        DrawTexture(vilao, 400, 220, WHITE);

        EndDrawing();
    }

    UnloadTexture(personagem);
    UnloadTexture(vilao);

    CloseWindow();

    return 0;
}
