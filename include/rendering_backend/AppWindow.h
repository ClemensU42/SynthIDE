//
// Created by clemens on 14.12.25.
//

#ifndef SYNTHCREATOR_APPWINDOW_H
#define SYNTHCREATOR_APPWINDOW_H

#include <functional>
#include <GLFW/glfw3.h>

#include "ui/widgets/NodeWidget.h"
#include "ui/widgets/nodes/MidiNode.h"

class AppWindow {
public:
    bool initialized = false;
    GLFWwindow* window;

    NodeEditor::NodeWidget nodeWidget;

    AppWindow();
    ~AppWindow();

    void run();
    void update();
    void render();
};

#endif //SYNTHCREATOR_APPWINDOW_H