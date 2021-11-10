#pragma once
#include <iostream>
using namespace std;

inline vec::Vector3 operator*(float a, vec::Vector3 b);
inline vec::Vector3 operator*(const float a, vec::Vector3 b);
inline vec::Vector3 operator*(float a, const vec::Vector3 b);
inline ostream& operator<<(ostream& cout, vec::Vector3 a);
namespace vec {
	class Vector3
	{
	private:
		
	public:
		float x, y, z;

		Vector3();
		Vector3(float _x, float _y, float _z);

		void inverse(Vector3 a);
		Vector3 zero();

		Vector3 operator+=(Vector3 a);
		Vector3 operator+(Vector3 a);
		Vector3 operator-(Vector3 a);
		Vector3 operator-=(Vector3 a);
		Vector3 operator*(float a);
		Vector3 operator*=(float a);
		Vector3 operator/(float a);
		Vector3 operator/=(float a);
		Vector3 operator+=(const Vector3 a);
		Vector3 operator+(const Vector3 a);
		Vector3 operator-(const Vector3 a);
		Vector3 operator-=(const Vector3 a);
		Vector3 operator*(const float a);
		Vector3 operator*=(const float a);
		Vector3 operator/(const float a);
		Vector3 operator/=(const float a);
	};
}

//inline Vector3 operator+(Vector3 a, Vector3 b);
/*
inline Vector3 operator-(Vector3 a, Vector3 b);
inline Vector3 operator-=(Vector3 a, Vector3 b);
inline Vector3 operator*(Vector3 a, float b);
inline Vector3 operator*=(Vector3 a, float b);
inline Vector3 operator*(float a, const Vector3 b);
inline Vector3 operator*=(float a, Vector3 b);
inline Vector3 operator/(Vector3 a, float b);
inline Vector3 operator/=(Vector3 a, float b);
ostream& operator<<(ostream& cout, Vector3 a);
*/