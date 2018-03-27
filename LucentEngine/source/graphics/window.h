#pragma once

#include <iostream>
#include <GLFW\glfw3.h>

namespace lucent { namespace graphics {
	
	void windowResize(GLFWwindow *window, int width, int height);

	class Window
	{
	private:
		const char* m_Title;
		int m_Width, m_Height;
		GLFWwindow *m_Window;
		bool m_Closed;

	public:
		Window(const char *title, int width, int height);
		~Window();
		bool closed() const;
		void update();
		void clear() const;

	private:
		bool init();

	public:
		inline int getWidth() const { return m_Width; }
		inline int getHeight() const { return m_Height; }
	};

} }