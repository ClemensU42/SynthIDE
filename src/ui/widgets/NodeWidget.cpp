//
// Created by clemens on 15.12.25.
//

#include "ui/widgets/NodeWidget.h"

#include <imgui.h>
#include <imnodes.h>

void NodeEditor::NodeWidget::Render() {

    ImGui::Begin("Node Editor");
    ImNodes::BeginNodeEditor();

    for (const auto& node : nodes) {
        node->render();
    }

    ImNodes::EndNodeEditor();
    ImGui::End();
}
