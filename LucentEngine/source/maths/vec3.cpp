#include "vec3.h"

namespace lucent { namespace maths {

	vec3::vec3()
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}

	vec3::vec3(const float &x, const float &y, const float &z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	vec3& vec3::add(const vec3 &other)
	{
		x += other.x;
		y += other.y;
		z += other.z;

		return *this;
	}

	vec3& vec3::subtract(const vec3 &other)
	{
		x -= other.x;
		y -= other.y;
		z -= other.z;

		return *this;
	}

	vec3& vec3::multiply(const vec3 &other)
	{
		x *= other.x;
		y *= other.y;
		z *= other.z;

		return *this;
	}

	vec3& vec3::divide(const vec3 &other)
	{
		x /= other.x;
		y /= other.y;
		z /= other.z;

		return *this;
	}

	vec3 operator+(vec3 lhs, const vec3 &rhs)
	{
		return lhs.add(rhs);
	}

	vec3 operator-(vec3 lhs, const vec3 &rhs)
	{
		return lhs.subtract(rhs);
	}

	vec3 operator*(vec3 lhs, const vec3 &rhs)
	{
		return lhs.multiply(rhs);
	}

	vec3 operator/(vec3 lhs, const vec3 &rhs)
	{
		return lhs.divide(rhs);
	}

	vec3& vec3::operator+=(const vec3& rhs)
	{
		return add(rhs);
	}

	vec3& vec3::operator-=(const vec3& rhs)
	{
		return subtract(rhs);
	}

	vec3& vec3::operator*=(const vec3& rhs)
	{
		return multiply(rhs);
	}

	vec3& vec3::operator/=(const vec3& rhs)
	{
		return divide(rhs);
	}

	bool vec3::operator==(const vec3 &rhs)
	{
		if (this->x == rhs.x && this->y == rhs.y && this->z == rhs.z)
			return (true);
		return (false);
	}

	bool vec3::operator!=(const vec3 &rhs)
	{
		if (this->x == rhs.x && this->y == rhs.y && this->z == rhs.z)
			return (false);
		return (true);
	}

	std::ostream& operator<<(std::ostream &stream, const vec3 &vector)
	{
		stream << "vec3: (" << vector.x << ", " << vector.y << ",  " << vector.z << ")";
		return (stream);
	}

} }