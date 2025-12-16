//
// Created by clemens on 15.12.25.
//

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <imgui.h>
#include <backends/imgui_impl_opengl3.h>
#include <backends/imgui_impl_glfw.h>

#include "rendering_backend/AppWindow.h"

void AppWindow::render() {

    // Clear screen
    glClear(GL_COLOR_BUFFER_BIT);

    // Start the new ImGui frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
    ImGui::DockSpaceOverViewport();

    // Render everything
    this->nodeWidget.Render();

    // Render the UI to the screen
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}
