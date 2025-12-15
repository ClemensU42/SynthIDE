#define GLAD_GL_IMPLEMENTATION
#define GLFW_INCLUDE_NONE

#include "rendering_backend/AppWindow.h"

void AppWindow::update() {

}

int main(int argc, char *argv[]) {

    AppWindow appWindow;

    appWindow.nodeWidget.nodes.push_back(
        std::make_unique<NodeEditor::MidiNode>(NodeEditor::MidiNode())
    );

    appWindow.run();

    return 0;
}