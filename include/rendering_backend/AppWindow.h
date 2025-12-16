//
// Created by clemens on 14.12.25.
//

#ifndef SYNTHCREATOR_APPWINDOW_H
#define SYNTHCREATOR_APPWINDOW_H

#include <functional>
#include <GLFW/glfw3.h>

#include "ui/widgets/NodeEditorWidget.h"
#include "ui/widgets/nodes/MidiNode.h"

/**
 * The AppWindow serves as the Basis of the Application.
 * It holds the Window itself, all UI widgets and contains the main rendering and update loop.
 */
class AppWindow {
public:
    bool initialized = false;           ///< Checks if everything is initialized correctly.
    GLFWwindow* window;                 ///< Main Window to render to.

    UI::NodeEditorWidget nodeWidget;

    AppWindow();
    ~AppWindow();

    void run();                         ///< Runs the Application and starts the main loop
    void update();                      ///< Used to handle everything logic-related
    void render();                      ///< Used to handle everything rendering related
};

#endif //SYNTHCREATOR_APPWINDOW_H