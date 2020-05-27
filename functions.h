#ifndef FUNC_H
#define FUNC_H
#include <glad/glad.h>
#include <GLFW/glfw3.h>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

void processInput(GLFWwindow* window);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);

#endif