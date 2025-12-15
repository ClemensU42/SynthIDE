#define GLAD_GL_IMPLEMENTATION
#define GLFW_INCLUDE_NONE

#include "rendering_backend/AppWindow.h"
#include "ui/core/RenderingLoop.h"

void DummyUpdate() {

}

int main(int argc, char *argv[]) {

    const AppWindow appWindow(&DummyUpdate, &RenderingLoop);
    appWindow.run();

    return 0;
}