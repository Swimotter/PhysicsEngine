#pragma once
#include <vector>
#include "Vector3.h"
#include "Object.h"


//Vector3 vec;

namespace world {

	const vec::Vector3 gravity = Vector3(0, -9.81f, 0);
	vector<obj::Object> objects;

	class PhysicsWorld {
	private:
		
		

	public:
		void AddObject(obj::Object object);
		void RemoveObject(obj::Object object);
		void Step(float dt);
	};
}