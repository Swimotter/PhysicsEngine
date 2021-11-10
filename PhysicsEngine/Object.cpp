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

Object::Object(Vector3 _pos, Vector3 _vel, Vector3 _force, float _mass)
{
	position = _pos;
	velocity = _vel;
	force = _force;
	mass = _mass;
}

void Object::addForce(Vector3 _force) {
	force += _force;
}