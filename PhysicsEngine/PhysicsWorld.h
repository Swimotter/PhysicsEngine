#pragma once
#include <vector>
#include "Object.h"

namespace world {
	

	class PhysicsWorld {
	private:
		
		

	public:
		const vec::Vector3 gravity = vec::Vector3(0, -9.81f, 0);
		vector<obj::Object*> objects;

		void AddObject(obj::Object* object);
		void RemoveObject(obj::Object* object);
		void Step(float dt);
	};
}