#include "PhysicsWorld.h"

using namespace world;
using namespace obj;


void PhysicsWorld::Step(float dt) {
	for (Object obj : objects) {
		obj.force += obj.mass * gravity;
		obj.velocity += ((obj.force / obj.mass) * dt);
		obj.position += (obj.velocity * dt);
		cout << obj.position << ", " << obj.velocity << ", " << obj.force << "\n";
		//obj.force = vec.zero();
	}
}

void PhysicsWorld::AddObject(Object object) {
	objects.push_back(object);
}

void PhysicsWorld::RemoveObject(Object object) {

}
