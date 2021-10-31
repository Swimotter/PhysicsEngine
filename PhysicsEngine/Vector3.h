#pragma once
#include <iostream>
using namespace std;

class Vector3
{
protected:
	

public:
	float x, y, z;
	Vector3() {
		x = 0;
		y = 0;
		z = 0;
	}
	Vector3(float m_x, float m_y, float m_z) : x(m_x), y(m_y), z(m_z) {

	}

	void inverse() {
		x = -x;
		y = -y;
		z = -z;
	}

	void zero() {
		Vector3(0, 0, 0);
	}	
};

//Adding two vectors together
inline Vector3 operator+= (Vector3 a, Vector3 b) {
	return Vector3(a.x += b.x, a.y += b.y, a.z += b.z);
}

//Subtracting a vector from a vector
inline Vector3 operator-= (Vector3 a, Vector3 b) {
	return Vector3(a.x -= b.x, a.y -= b.y, a.z -= b.z);
}

//Multiplying a vector by a float
inline Vector3 operator* (Vector3 a, float b) {
	return Vector3(a.x *= b, a.y *= b, a.z *= b);
}

//Multiplying a float by a vector
inline Vector3 operator* (float a, Vector3 b) {
	return Vector3(b.x *= a, b.y *= a, b.z *= a);
}

//Dividing a vector by a float
inline Vector3 operator/ (Vector3 a, float b) {
	return Vector3(a.x /= b, a.y /= b, a.z /= b);
}
/*
ostream& operator<< (ostream& cout, const Vector3 a) {
	cout << "(" << a.x << ", " << a.y << ", " << a.z << ")";
	return cout;
}*/
