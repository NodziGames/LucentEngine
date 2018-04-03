#include "window.h"

namespace lucent { namespace graphics {
	
	Window::Window(const char *title, int width, int height)
	{
		m_Title = title;
		m_Width = width;
		m_Height = height;
		if (!init())
			glfwTerminate();
	}

	Window::~Window()
	{
		glfwTerminate();
	}

	void Window::clear() const
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}

	void Window::update()
	{
		glfwPollEvents();

		glfwSwapBuffers(m_Window);
	}

	bool Window::closed() const
	{
		return glfwWindowShouldClose(m_Window);
	}

	bool Window::init()
	{
		//Init GLFW, ensure it's working, then proceed
		if (!glfwInit())
		{
			std::cout << "Error! Could not initialize GLFW" << std::endl;
			return (false);
		}

		m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);

		if (!m_Window)
		{
			glfwTerminate();
			std::cout << "Failed to create GLFW Window" << std::endl;
			return (false);
		}

		glfwMakeContextCurrent(m_Window);
		glfwSetWindowSizeCallback(m_Window, windowResize);

		if (glewInit() != GLEW_OK)
		{
			std::cout << "Glew is not okay :(" << std::endl;
			return (false);
		}

		std::cout << "OpenGL: " << glGetString(GL_VERSION) << std::endl;

		return (true);
	}

	void windowResize(GLFWwindow *window, int width, int height)
	{
		glViewport(0, 0, width, height);
	}

} }