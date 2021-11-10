#pragma once
#include <iostream>
using namespace std;

/*
inline Vector3 operator*(float a, Vector3 b);
/*
inline vec::Vector3 operator*(const float a, vec::Vector3 b);
/*
//inline vec::Vector3 operator*(float a, const vec::Vector3 b);
*/

namespace vec {
	class Vector3
	{
	private:
		
	public:
		float x, y, z;

		Vector3();
		Vector3(float _x, float _y, float _z);

		void inverse(Vector3 a);
		static Vector3 zero();

		Vector3 operator+(Vector3 a);
		void operator+=(Vector3 a);
		Vector3 operator-(Vector3 a);
		void operator-=(Vector3 a);
		Vector3 operator*(float a);
		void operator*=(float a);
		Vector3 operator/(float a);
		void operator/=(float a);

		

		/*
		Vector3 operator+=(const Vector3 a);
		Vector3 operator+(const Vector3 a);
		Vector3 operator-(const Vector3 a);
		Vector3 operator-=(const Vector3 a);
		Vector3 operator*(const float a);
		Vector3 operator*=(const float a);
		Vector3 operator/(const float a);
		Vector3 operator/=(const float a);
		*/
	};
}

std::ostream &operator<<(ostream &cout, vec::Vector3 &a);

vec::Vector3 operator*(float& a, vec::Vector3& b);
vec::Vector3 operator*(const float& a, vec::Vector3& b);
vec::Vector3 operator*(float &a, const vec::Vector3 &b);
vec::Vector3 operator*(const float &a, const vec::Vector3 &b);


//inline Vector3 operator+(Vector3 a, Vector3 b);
/*
inline Vector3 operator-(Vector3 a, Vector3 b);
inline Vector3 operator-=(Vector3 a, Vector3 b);
inline Vector3 operator*(Vector3 a, float b);
inline Vector3 operator*=(Vector3 a, float b);

inline Vector3 operator*=(float a, Vector3 b);
inline Vector3 operator/(Vector3 a, float b);
inline Vector3 operator/=(Vector3 a, float b);
ostream& operator<<(ostream& cout, Vector3 a);
*/