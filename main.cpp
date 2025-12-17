#define GLAD_GL_IMPLEMENTATION
#define GLFW_INCLUDE_NONE

#include "rendering_backend/AppWindow.h"
#include "ui/widgets/nodes/WaveformSynth.h"

void AppWindow::update() {

}

int main(int argc, char *argv[]) {

    AppWindow appWindow;

    appWindow.nodeWidget.nodes.push_back(std::make_unique<UI::MidiNode>(UI::MidiNode()));
    appWindow.nodeWidget.nodes.push_back(std::make_unique<UI::WaveformSynth>(UI::WaveformSynth()));

    appWindow.run();

    return 0;
}