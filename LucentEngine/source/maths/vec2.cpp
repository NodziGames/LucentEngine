#include "vec2.h"

namespace lucent { namespace maths {

	vec2::vec2()
	{
		x = 0.0f;
		y = 0.0f;
	}

	vec2::vec2(const float &x, const float &y)
	{
		this->x = x;
		this->y = y;
	}

	vec2& vec2::add(const vec2 &other)
	{
		x += other.x;
		y += other.y;

		return *this;
	}

	vec2& vec2::subtract(const vec2 &other)
	{
		x -= other.x;
		y -= other.y;

		return *this;
	}

	vec2& vec2::multiply(const vec2 &other)
	{
		x *= other.x;
		y *= other.y;

		return *this;
	}

	vec2& vec2::divide(const vec2 &other)
	{
		x /= other.x;
		y /= other.y;

		return *this;
	}

	vec2 operator+(vec2 lhs, const vec2 &rhs)
	{
		return lhs.add(rhs);
	}

	vec2 operator-(vec2 lhs, const vec2 &rhs)
	{
		return lhs.subtract(rhs);
	}

	vec2 operator*(vec2 lhs, const vec2 &rhs)
	{
		return lhs.multiply(rhs);
	}

	vec2 operator/(vec2 lhs, const vec2 &rhs)
	{
		return lhs.divide(rhs);
	}

	vec2& vec2::operator+=(const vec2& rhs)
	{
		return (*this + rhs);
	}

	vec2& vec2::operator-=(const vec2& rhs)
	{
		return (*this - rhs);
	}

	vec2& vec2::operator*=(const vec2& rhs)
	{
		return (*this * rhs);
	}

	vec2& vec2::operator/=(const vec2& rhs)
	{
		return (*this / rhs);
	}

	bool vec2::operator==(const vec2 &rhs)
	{
		if (this->x == rhs.x && this->y == rhs.y)
			return (true);
		return (false);
	}

	bool vec2::operator!=(const vec2 &rhs)
	{
		if (this->x == rhs.x && this->y == rhs.y)
			return (false);
		return (true);
	}

	std::ostream& operator<<(std::ostream &stream, const vec2 &vector)
	{
		stream << "vec2: (" << vector.x << ", " << vector.y << ")";
		return (stream);
	}

} }