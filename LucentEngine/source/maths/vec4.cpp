#include "vec4.h"

namespace lucent { namespace maths {

	vec4::vec4()
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
		w = 0.0f;
	}

	vec4::vec4(const float &x, const float &y, const float &z, const float &w)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = w;
	}

	vec4& vec4::add(const vec4 &other)
	{
		x += other.x;
		y += other.y;
		z += other.z;
		w += other.w;

		return *this;
	}

	vec4& vec4::subtract(const vec4 &other)
	{
		x -= other.x;
		y -= other.y;
		z -= other.z;
		w -= other.w;

		return *this;
	}

	vec4& vec4::multiply(const vec4 &other)
	{
		x *= other.x;
		y *= other.y;
		z *= other.z;
		w *= other.w;

		return *this;
	}

	vec4& vec4::divide(const vec4 &other)
	{
		x /= other.x;
		y /= other.y;
		z /= other.z;
		w /= other.w;

		return *this;
	}

	vec4 operator+(vec4 lhs, const vec4 &rhs)
	{
		return lhs.add(rhs);
	}

	vec4 operator-(vec4 lhs, const vec4 &rhs)
	{
		return lhs.subtract(rhs);
	}

	vec4 operator*(vec4 lhs, const vec4 &rhs)
	{
		return lhs.multiply(rhs);
	}

	vec4 operator/(vec4 lhs, const vec4 &rhs)
	{
		return lhs.divide(rhs);
	}

	vec4& vec4::operator+=(const vec4& rhs)
	{
		return (*this + rhs);
	}

	vec4& vec4::operator-=(const vec4& rhs)
	{
		return (*this - rhs);
	}

	vec4& vec4::operator*=(const vec4& rhs)
	{
		return (*this * rhs);
	}

	vec4& vec4::operator/=(const vec4& rhs)
	{
		return (*this / rhs);
	}

	bool vec4::operator==(const vec4 &rhs)
	{
		if (this->x == rhs.x && this->y == rhs.y && this->z == rhs.z && this->w == rhs.w)
			return (true);
		return (false);
	}

	bool vec4::operator!=(const vec4 &rhs)
	{
		if (this->x == rhs.x && this->y == rhs.y && this->z == rhs.z && this->w == rhs.w)
			return (false);
		return (true);
	}

	std::ostream& operator<<(std::ostream &stream, const vec4 &vector)
	{
		stream << "vec4: (" << vector.x << ", " << vector.y << ", " << vector.y << ", " << vector.w << ")";
		return (stream);
	}

} }