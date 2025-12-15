//
// Created by clemens on 14.12.25.
//
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "rendering_backend/AppWindow.h"

#include <cstdio>

#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>


void error_callback(int error, const char* description) {
    fprintf (stderr, "GLFW Error: %s\n", description);
}

AppWindow::AppWindow(const std::function<void()> &updateCallback, const std::function<void()> &renderCallback) {

    this->updateCallback = updateCallback;
    this->renderCallback = renderCallback;

    // Initialize GLFW and create GLFWwindow
    if (!glfwInit()) {
        return;
        // TODO: Add Error logging
    }

    glfwSetErrorCallback(error_callback);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(1280, 720, "Synth IDE", nullptr, nullptr);
    if (!window) {
        return;
        // TODO: Add Error logging
    }

    glfwMakeContextCurrent(window);

    gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress));

    glfwSwapInterval(1);

    // Initialize IMGUI

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGui::StyleColorsDark();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init();

    initialized = true;
}

AppWindow::~AppWindow() {

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwDestroyWindow(window);
    glfwTerminate();
}

void AppWindow::run() const {

    while (!glfwWindowShouldClose(window)) {
/*

*/

        // TODO: multithread this shit
        updateCallback();
        renderCallback();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

}
