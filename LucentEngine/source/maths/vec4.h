#pragma once

#include <iostream>

namespace lucent { namespace maths {

	struct vec4
	{
		float x, y, z, w;

		vec4();
		vec4(const float &x, const float &y, const float &z, const float &w);

		vec4& add(const vec4 &other);
		vec4& subtract(const vec4 &other);
		vec4& multiply(const vec4 &other);
		vec4& divide(const vec4 &other);

		friend vec4 operator+(vec4 lhs, const vec4 &rhs);
		friend vec4 operator-(vec4 lhs, const vec4 &rhs);
		friend vec4 operator*(vec4 lhs, const vec4 &rhs);
		friend vec4 operator/(vec4 lhs, const vec4 &rhs);

		vec4 &operator+=(const vec4 &rhs);
		vec4 &operator-=(const vec4 &rhs);
		vec4 &operator*=(const vec4 &rhs);
		vec4 &operator/=(const vec4 &rhs);

		bool operator==(const vec4 &rhs);
		bool operator!=(const vec4 &rhs);

		friend std::ostream& operator<<(std::ostream &stream, const vec4 &vector);
	};

} }