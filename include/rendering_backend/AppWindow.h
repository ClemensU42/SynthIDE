//
// Created by clemens on 14.12.25.
//

#ifndef SYNTHCREATOR_APPWINDOW_H
#define SYNTHCREATOR_APPWINDOW_H

#include <GLFW/glfw3.h>

struct AppWindow {
    bool initialized = false;
    GLFWwindow* window;

    AppWindow();
    ~AppWindow();
    void run() const;
};

#endif //SYNTHCREATOR_APPWINDOW_H