#pragma once
#include <vector>
#include "Vector3.h"

using namespace std;


struct Object {
	Vector3 position;
	Vector3 velocity;
	Vector3 force;
	float mass;
};

class PhysicsWorld {
private:
	vector<Object*> objects;
	Vector3 gravity = Vector3(0, -9.81f, 0);

public:
	void AddObject(Object* object) {
		objects.push_back(object);
	}
	void RemoveObject(Object* object) {

	}

	void Step(float dt) {
		for (Object* obj : objects) {
			obj->force += obj->mass * gravity;
			obj->velocity += obj->force / obj->mass * dt;
			obj->position += obj->velocity * dt;
			obj->force = Vector3(0, 0, 0);
		}
	}
};
