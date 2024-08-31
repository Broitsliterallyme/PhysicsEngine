#include "Collision.h"


extern std::vector<Body2D> bodies; 

void Collision::CheckCollisions(){
   for (auto &body : bodies) {
            body.Move(2, 1);
            body.Draw();
        }
}