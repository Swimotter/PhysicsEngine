#include "PhysicsWorld.h"
#include <iostream>

using namespace world;
using namespace obj;


void PhysicsWorld::Step(float dt) {
	for (Object* obj : objects) {
		//cout << obj->name << endl;
		obj->force += obj->mass * gravity;
		obj->velocity += obj->force / obj->mass * dt;
		obj->position += obj->velocity * dt;
		//cout << obj->velocity.x << ", " << obj->velocity.y << ", " << obj->velocity.z << endl;
		cout << *obj << endl;
		obj->force = vec::Vector3::zero();
	}
}

void PhysicsWorld::AddObject(Object* object) {
	objects.push_back(object);
}

void PhysicsWorld::RemoveObject(Object* object) {
	objects.erase(std::remove(objects.begin(), objects.end(), object));
}