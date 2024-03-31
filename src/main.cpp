#include <iostream>
#include <GLAD/glad.h>
#include <GLFW/glfw3.h>
int main(void){
	if (!glfwInit()){
		std::cout << "glfw has not been initialized" << std::endl;
		return -1;
	}
	GLFWwindow* pWindow = glfwCreateWindow(700,500,"3D",nullptr,nullptr);
	if (!pWindow){
		std::cout << "window has not been created" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(pWindow);
	if (!gladLoadGL()) {
		std::cout << "glad has not been loaded" << std::endl;
		glfwTerminate();
		return -1;
	}
	glClearColor(0,1,0,1);
	while (!glfwWindowShouldClose(pWindow))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(pWindow);
		glfwPollEvents();
	}
	glfwTerminate();
	return 0;
}