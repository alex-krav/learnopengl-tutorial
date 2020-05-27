#include <iostream>
#include "functions.h"

int main_attr() 
{
    GLFWwindow* window;
    try {
        window = init_glfw();
    }
    catch (std::exception& e) {
        return -1;
    }

	int nrAttributes;
	glGetIntegerv(GL_MAX_VERTEX_ATTRIBS, &nrAttributes);
	std::cout << "Maximum nr of vertex attributes supported: " << nrAttributes << std::endl;

	return 0;
}