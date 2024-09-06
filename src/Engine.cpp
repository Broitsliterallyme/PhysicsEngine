#include "Engine.h"
#include "Collision.h"
Collision collision;
std::vector<Body2D> bodies;
 
  void Engine::dropbody(){
    Body2D body;
    body.CreateCircle(GetMousePosition(), 1.0f, 30.0f, 1.0f, true, body);
    bodies.push_back(body);
 }
 void Engine::bodydraw(){
    for (auto &body:bodies){
        body.Draw();
    }
 }
    void Engine::CollisionHandle(){
      for (int i = 0; i < bodies.size(); i++) {
        for (int j = i + 1; j < bodies.size(); j++) {

        }
      }
    }
 