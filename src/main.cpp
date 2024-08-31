#include "raylib.h"
#include "Body2D.h"
#include <vector>
#include "Collision.h"
std::vector<Body2D> bodies;
int main() {
    InitWindow(800, 600, "Random Body2D");
    SetTargetFPS(60);
    Body2D body;
    Body2D body1;
    Collision collision;
    Vector2 position = {10.0f, 10.0f};
    float density = 1.0f;
    float radius = 5.0f;
    float restitution = 1.0f;
    bool isStatic = false;

    body.CreateCircle(position, density, radius, restitution, isStatic, body);
    bodies.push_back(body);
    body.CreateRectangle(position, 1.0f, 50, 50, 1.0f, true, body1);
    bodies.push_back(body1);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
    collision.CheckCollisions(); 
        
        EndDrawing();
    }
    CloseWindow();

    return 0;
}
