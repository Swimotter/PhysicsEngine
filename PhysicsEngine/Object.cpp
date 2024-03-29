#include "Object.h"

using namespace obj;
using namespace vec;


Object::Object()
{
	position = Vector3(0, 0, 0);
	velocity = Vector3(0, 0, 0);
	force = Vector3(0, 0, 0);
	mass = 1;
}

Object::Object(Vector3 _pos, Vector3 _vel, Vector3 _force, float _mass, string _name)
{
	position = _pos;
	velocity = _vel;
	force = _force;
	mass = _mass;
	name = _name;
}

void Object::addForce(Vector3 _force) {
	force += _force;
}

void Object::setForce(Vector3 _force) {
	force = _force;
}

std::ostream& operator<<(ostream& cout, obj::Object& obj)
{
	return cout << obj.name << ": Position" << obj.position << ", Velocity" << obj.velocity << ", Force" << obj.force;
}