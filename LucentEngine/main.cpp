#include "source\graphics\window.h"
#include "source\maths\maths.h"

int main(void)
{
	using namespace lucent;
	using namespace graphics;
	using namespace maths;

	Window window("Lucent!", 960, 540);

	glClearColor(1.0f, 0.5f, 0.5f, 1.0f); //Define The Default Screen Clear Color

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	vec2 vector(1.0f, 1.0f);
	vec2 vectoor(1.0f, 1.0f);

	while (!window.closed())
	{
		window.clear();
		std::cout << (vector + vectoor) << std::endl;
		window.update();
	}

	return (0);
}