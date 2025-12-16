//
// Created by clemens on 15.12.25.
//

#include "ui/widgets/NodeEditorWidget.h"

#include <imgui.h>
#include <imnodes.h>

void UI::NodeEditorWidget::Render() {

    ImGui::Begin("Node Editor");
    ImNodes::BeginNodeEditor();

    for (const auto& node : nodes) {
        node->render();
    }

    ImNodes::EndNodeEditor();
    ImGui::End();
}
