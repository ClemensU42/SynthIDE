//
// Created by clemens on 15.12.25.
//

#include "ui/widgets/nodes/MidiNode.h"

#include <imgui.h>
#include <imnodes.h>

NodeEditor::MidiNode::MidiNode() {
    this->attributes.emplace_back(AttributeType::CV, AttributeIO::OUTPUT, "Control Voltage");
    this->id = get_unique_id();
}

void NodeEditor::MidiNode::render() {
    ImNodes::BeginNode(this->id);

    ImNodes::BeginNodeTitleBar();
    ImGui::TextUnformatted("MIDI");
    ImNodes::EndNodeTitleBar();

    for (const UINodeAttribute& attribute : this->attributes ) {
        switch (attribute.io) {
            case AttributeIO::INPUT:
                ImNodes::BeginInputAttribute(attribute.id);
                ImGui::Text("%s", attribute.name.c_str());
                ImNodes::EndInputAttribute();
                break;
            case AttributeIO::OUTPUT:
                ImNodes::BeginOutputAttribute(attribute.id);
                ImGui::Text("%s", attribute.name.c_str());
                ImNodes::EndOutputAttribute();
                break;
        }
    }

    ImNodes::EndNode();
}


