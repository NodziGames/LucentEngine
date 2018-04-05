#pragma once

#include <iostream>

namespace lucent { namespace maths {

	struct vec2
	{
		float x, y;

		vec2();
		vec2(const float &x, const float &y);

		vec2& add(const vec2 &other);
		vec2& subtract(const vec2 &other);
		vec2& multiply(const vec2 &other);
		vec2& divide(const vec2 &other);

		friend vec2 operator+(vec2 lhs, const vec2 &rhs);
		friend vec2 operator-(vec2 lhs, const vec2 &rhs);
		friend vec2 operator*(vec2 lhs, const vec2 &rhs);
		friend vec2 operator/(vec2 lhs, const vec2 &rhs);

		vec2 &operator+=(const vec2 &rhs);
		vec2 &operator-=(const vec2 &rhs);
		vec2 &operator*=(const vec2 &rhs);
		vec2 &operator/=(const vec2 &rhs);

		bool operator==(const vec2 &rhs);
		bool operator!=(const vec2 &rhs);

		friend std::ostream& operator<<(std::ostream &stream, const vec2 &vector);
	};

} }