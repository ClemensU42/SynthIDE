//
// Created by clemens on 15.12.25.
//

#ifndef SYNTHCREATOR_NODEWIDGET_H
#define SYNTHCREATOR_NODEWIDGET_H
#include <functional>
#include <memory>
#include <vector>

#include "ui/widgets/nodes/UINodeBase.h"

namespace NodeEditor {

    struct NodeWidget {
        std::function<void()> nodeTreeChangedCallback;
        std::vector<std::unique_ptr<UINodeBase>> nodes;

        void Render();
    };
}
#endif //SYNTHCREATOR_NODEWIDGET_H