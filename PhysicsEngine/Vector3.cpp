#include "Vector3.h"

using namespace vec;

Vector3::Vector3() {
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(float _x, float _y, float _z) {
	x = _x;
	y = _y;
	z = _z;
}

void Vector3::inverse(Vector3 a) {
	a.x = -a.x;
	a.y = -a.y;
	a.z = -a.z;
}

Vector3 Vector3::zero() {
	return Vector3(0, 0, 0);
}


Vector3 Vector3::operator+(Vector3 a) {
	return Vector3(this->x + a.x, this->y + a.y, this->z + a.z);
}
Vector3 Vector3::operator+=(Vector3 a) {
	return Vector3(this->x += a.x, this->y += a.y, this->z += a.z);
}
Vector3 Vector3::operator-(Vector3 a) {
	return Vector3(this->x - a.x, this->y - a.y, this->z - a.z);
}
Vector3 Vector3::operator-=(Vector3 a) {
	return Vector3(this->x -= a.x, this->y -= a.y, this->z -= a.z);
}
Vector3 Vector3::operator*(float a) {
	return Vector3(this->x * a, this->y * a, this->z * a);
}
Vector3 Vector3::operator*=(float a) {
	return Vector3(this->x *= a, this->y *= a, this->z *= a);
}
Vector3 Vector3::operator/(float a) {
	return Vector3(this->x / a, this->y / a, this->z / a);
}
Vector3 Vector3::operator/=(float a) {
	return Vector3(this->x /= a, this->y /= a, this->z /= a);
}
Vector3 Vector3::operator+(const Vector3 a) {
	return Vector3(this->x + a.x, this->y + a.y, this->z + a.z);
}
Vector3 Vector3::operator+=(const Vector3 a) {
	return Vector3(this->x += a.x, this->y += a.y, this->z += a.z);
}
Vector3 Vector3::operator-(const Vector3 a) {
	return Vector3(this->x - a.x, this->y - a.y, this->z - a.z);
}
Vector3 Vector3::operator-=(const Vector3 a) {
	return Vector3(this->x -= a.x, this->y -= a.y, this->z -= a.z);
}
Vector3 Vector3::operator*(const float a) {
	return Vector3(this->x * a, this->y * a, this->z * a);
}
Vector3 Vector3::operator*=(const float a) {
	return Vector3(this->x *= a, this->y *= a, this->z *= a);
}
Vector3 Vector3::operator/(const float a) {
	return Vector3(this->x / a, this->y / a, this->z / a);
}
Vector3 Vector3::operator/=(const float a) {
	return Vector3(this->x /= a, this->y /= a, this->z /= a);
}
Vector3 operator*(float a, Vector3 b) {
	return Vector3(a * b.x, a * b.y, a * b.z);
}
Vector3 operator*(const float a, Vector3 b) {
	return Vector3(a * b.x, a * b.y, a * b.z);
}
Vector3 operator*(float a, const Vector3 b) {
	return Vector3(a * b.x, a * b.y, a * b.z);
}
ostream& operator<<(ostream& cout, Vector3 a) {
	cout << "(" << a.x << ", " << a.y << ", " << a.z << ")";
	return cout;
}