#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>
#include "imgui.h"

#include "Inventory.h"

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        std::cout << "pressed escape" << std::endl;
        glfwDestroyWindow(window);
    }
}

int main(void)
{
    glEnable(GL_DEPTH_TEST);
    auto* inv = new Inventory(10,5);

    inv->InitInventory(inv->InventorySizeX,inv->InventorySizeY);

    std::vector<GLFWwindow*> AllWindow;
    GLFWwindow* MainWindow;
    GLFWwindow* InventoryWindow;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    MainWindow = glfwCreateWindow(1440, 810, "MDKraft", NULL, NULL);
    InventoryWindow = glfwCreateWindow(480, 270, "MDInventory", NULL, NULL);
    AllWindow.push_back(MainWindow);
    AllWindow.push_back(InventoryWindow);

    if (!MainWindow)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(MainWindow);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(MainWindow))
    {
        glfwSetKeyCallback(MainWindow, key_callback);

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(MainWindow);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
