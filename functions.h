#ifndef FUNC_H
#define FUNC_H
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader_const.h"
#include "shader.h"

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

void processInput(GLFWwindow* window);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);

GLFWwindow* init_glfw();
void render_loop(GLFWwindow* window, Shader ourShader, unsigned int &VBO, unsigned int &VAO);
void upd_shader_uniform_color(Shader ourShader, const char* uniformVar);

#endif