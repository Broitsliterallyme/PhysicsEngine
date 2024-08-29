#include "Body2D.h"

Body2D::Body2D(Vector2 position, float density, float mass, float restitution, float area, bool isstatic, 
               float radius, float width, float height, ShapeType shapeType)
    : Position(position), Density(density), Mass(mass), Restitution(restitution), 
      Area(area), isStatic(isstatic), Radius(radius), Width(width), Height(height), shape(shapeType) 
{}

Body2D::Body2D() 
    : Position({0, 0}), Density(0), Mass(0), Restitution(0), Area(0), 
      isStatic(false), Radius(0), Width(0), Height(0), shape(ShapeType::Circle) 
{}

void Body2D::CreateCircle(Vector2 position, float density, float radius, float restitution, bool isstatic, Body2D &body) {
    float area = PI * radius * radius;
    float mass = area * density;
    ShapeType shapeType = ShapeType::Circle;
    body = Body2D(position, density, mass, restitution, area, isstatic, radius, 0.0f, 0.0f, shapeType);
}

void Body2D::CreateRectangle(Vector2 position, float density, float length, float width, float restitution, bool isstatic, Body2D &body) {
    float area = length * width;
    float mass = area * density;
    ShapeType shapeType = ShapeType::Box;
    body = Body2D(position, density, mass, restitution, area, isstatic, 0.0f, width, length, shapeType);
}

void Body2D::Draw() {
    if (shape == ShapeType::Circle) {
        DrawCircleV(Position, Radius, BLUE);
    } else if (shape == ShapeType::Box) {
        DrawRectangleV(Position, (Vector2){Width, Height}, BLUE);
    }
}

void Body2D::Move(int x, int y) {
    Position.x += x;
    Position.y += y;
}

void Body2D::Moveto(int x, int y) {
    Position.x = x;
    Position.y = y;
}
  Vector2 Body2D::getPosition() const {
    return Position ;
  }
