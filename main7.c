#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    float posX = -100.0f;
    const int spriteY = 100;

    InitWindow(screenWidth, screenHeight, "Atividade_07");

    InitAudioDevice();

   
    Texture2D sprite = LoadTexture("personagem.png");

    Sound s_tiro = LoadSound("tiro.mp3");
    Sound s_explosao = LoadSound("explosao.mp3");
    Sound s_moeda = LoadSound("acerto.mp3");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
    
        posX += GetFrameTime() * 200.0f;
        if (posX > screenWidth)
        {
            posX = -sprite.width;
            PlaySound(s_explosao);
        }

        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) PlaySound(s_tiro);

        if (IsKeyPressed(KEY_SPACE)) PlaySound(s_moeda);

        BeginDrawing();

        ClearBackground(RAYWHITE);


        DrawTexture(sprite, posX, spriteY, WHITE);

        EndDrawing();
    }

    UnloadSound(s_tiro);
    UnloadSound(s_explosao);
    UnloadSound(s_moeda);
    UnloadTexture(sprite);

    CloseAudioDevice();
    CloseWindow();

    return 0;
}
