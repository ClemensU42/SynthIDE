//
// Created by clemens on 17.12.25.
//

#include "ui/widgets/nodes/WaveformSynth.h"

#include "imnodes.h"

UI::WaveformSynth::WaveformSynth() {
    this->id = get_unique_id();
    this->attributes.emplace_back(AttributeType::CV, AttributeIO::INPUT, "Note");
    this->attributes.emplace_back(AttributeType::CV, AttributeIO::INPUT, "Detune");
    this->attributes.emplace_back(AttributeType::WAVE, AttributeIO::OUTPUT, "Wave");
}

void UI::WaveformSynth::render() {
    ImNodes::BeginNode(this->id);

    ImNodes::BeginNodeTitleBar();
    ImGui::TextUnformatted("Waveform Synth");
    ImNodes::EndNodeTitleBar();

    for (const UINodeAttribute& attr : this->attributes) {
        switch (attr.io) {
            case AttributeIO::INPUT:
                ImNodes::BeginInputAttribute(attr.id);
                ImGui::Text("%s", attr.name.c_str());
                ImNodes::EndInputAttribute();
                break;
            case AttributeIO::OUTPUT:
                ImNodes::BeginOutputAttribute(attr.id);
                ImGui::Text("%s", attr.name.c_str());
                ImNodes::EndOutputAttribute();
                break;
        }
    }

    ImNodes::EndNode();
}
