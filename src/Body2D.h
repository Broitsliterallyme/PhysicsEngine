#ifndef BODY2D_H
#define BODY2D_H

#include "raylib.h"
#include <cmath>

enum class ShapeType {
    Circle,
    Box 
};

class Body2D {
private:
    Vector2 Position;
    Vector2 Velocity;
    float Rotation;
    float RotationalVelocity;
    float Density;
    float Mass;
    float Restitution;
    float Area;
    bool isStatic;
    float Radius;
    float Width;
    float Height;
    ShapeType shape;
    Body2D(Vector2 position, float density, float mass, float restitution, float area, bool isstatic, 
           float radius, float width, float height, ShapeType shapeType);
public:

    Body2D();
    void CreateCircle(Vector2 position, float density, float radius, float restitution, bool isstatic, Body2D &body);
    void CreateRectangle(Vector2 position, float density, float length, float width, float restitution, bool isstatic, Body2D &body);
    void Draw();
    void Move(int x, int y);
    void Moveto(int x, int y);
    Vector2 getPosition() const ;
};

#endif // BODY2D_H
