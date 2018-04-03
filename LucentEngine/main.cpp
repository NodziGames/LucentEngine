#include "source\graphics\window.h"

int main(void)
{
	using namespace lucent;
	using namespace graphics;

	Window window("Lucent!", 960, 540);

	glClearColor(1.0f, 0.5f, 0.5f, 1.0f); //Define The Default Screen Clear Color

	while (!window.closed())
	{
		std::cout << window.getWidth() << " | " << window.getHeight() << std::endl;
		window.clear();
		glBegin(GL_TRIANGLES);
		glColor3f(0.5f, 1.0f, 0.5f);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
		window.update();

	}

	return (0);
}