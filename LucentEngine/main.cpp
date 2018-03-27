#include <GLFW\glfw3.h>
#include <iostream>

int main(void)
{
	if (!glfwInit())
		std::cout << "Error!" << std::endl;
	else
		std::cout << "Success!" << std::endl;
	system("PAUSE");
	return (0);
}