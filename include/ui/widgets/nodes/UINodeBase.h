//
// Created by clemens on 15.12.25.
//

#ifndef SYNTHCREATOR_NODEBASE_H
#define SYNTHCREATOR_NODEBASE_H

#include <vector>

#include "imgui.h"

#include "ui/widgets/nodes/UINodeAttribute.h"

namespace NodeEditor {
    class UINodeBase {
    public:
        int id;
        std::vector<UINodeAttribute> attributes;
        ImVec2 position;

        virtual ~UINodeBase() = default;
        virtual void render() = 0;
    };
}

#endif //SYNTHCREATOR_NODEBASE_H