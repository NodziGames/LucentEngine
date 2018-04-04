#pragma once

#include <iostream>
#include <GL/glew.h>
#include <GLFW\glfw3.h>

namespace lucent { namespace graphics {
	
#define MAX_KEYS	1024
#define MAX_BUTTONS	32

	class Window
	{
	public:
		static Window* INSTANCE;

	private:
		const char* m_Title;
		int m_Width, m_Height;
		GLFWwindow *m_Window;
		bool m_Closed;

		static bool m_Keys[MAX_KEYS];
		static bool m_MouseButtons[MAX_BUTTONS];
		static double mouse_x, mouse_y;

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