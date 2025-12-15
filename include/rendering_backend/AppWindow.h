//
// Created by clemens on 14.12.25.
//

#ifndef SYNTHCREATOR_APPWINDOW_H
#define SYNTHCREATOR_APPWINDOW_H

#include <functional>
#include <GLFW/glfw3.h>

struct AppWindow {
    bool initialized = false;
    GLFWwindow* window;
    std::function<void()> updateCallback;
    std::function<void()> renderCallback;

    AppWindow(const std::function<void()> &updateCallback, const std::function<void()> &renderCallback);
    ~AppWindow();
    void run() const;
};

#endif //SYNTHCREATOR_APPWINDOW_H