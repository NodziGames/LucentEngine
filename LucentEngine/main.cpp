#include "source\graphics\window.h"

int main(void)
{
	using namespace lucent;
	using namespace graphics;

	Window window("Lucent!", 960, 540);

	glClearColor(1.0f, 0.5f, 0.5f, 1.0f); //Define The Default Screen Clear Color

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	while (!window.closed())
	{
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		std::cout << x << "   :   " << y << std::endl;
		window.update();
	}

	return (0);
}