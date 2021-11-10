#pragma once
#include "Vector3.h"

namespace obj {
	class Object
	{
	private:
		
	public:
		vec::Vector3 position, velocity, force;
		float mass;
		string name;

		Object();
		Object(vec::Vector3 _pos, vec::Vector3 _vel, vec::Vector3 _force, float _mass, string _name);

		void addForce(vec::Vector3 _force);
		void setForce(vec::Vector3 _force);
	};
}

std::ostream& operator<<(ostream& cout, obj::Object& obj);