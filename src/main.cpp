#include "raylib.h"
#include "Body2D.h"
#include <vector>
#include "Collision.h"
#include "Engine.h"
Engine engine;
Collision collision;
int main() {
    InitWindow(800, 600, "Random Body2D");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        engine.dropbody();
        collision.CheckCollisions();
        engine.bodydraw();
        EndDrawing();
    }
    CloseWindow();

    return 0;
}
