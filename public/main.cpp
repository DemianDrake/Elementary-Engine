#include <GLFW/glfw3.h>

#include <iostream>

int main() {
  GLFWwindow* window;

  if (!glfwInit()) {
    return -1;
  }

  std::cout << "Hello, World!" << std::endl;
  /* Create a windowed mode window and its OpenGL context */
  window = glfwCreateWindow(640, 480, "GLFW CMake starter", NULL, NULL);
  if(!window) {
    glfwTerminate();
    return -1;
  }

  /* Make the window's context current */
  glfwMakeContextCurrent(window);
  glClearColor(0.4f, 0.3f, 0.4f, 0.0f);

  /* Loop until the user closes the window */
  while(!glfwWindowShouldClose(window)) {
    /* Render here */
    glClear(GL_COLOR_BUFFER_BIT);

    /* Swap front and back buffers */
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}