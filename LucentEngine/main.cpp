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
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
	}

	return (0);
}