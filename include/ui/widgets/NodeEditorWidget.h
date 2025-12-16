//
// Created by clemens on 15.12.25.
//

#ifndef SYNTHCREATOR_NODEWIDGET_H
#define SYNTHCREATOR_NODEWIDGET_H
#include <functional>
#include <memory>
#include <vector>

#include "ui/widgets/nodes/UINodeBase.h"

namespace UI {
    /**
     * The widget containing the Node Editor itself. Used for editing the Node-Tree
     */
    struct NodeEditorWidget {
        std::function<void()> nodeTreeChangedCallback;      ///< Called if any nodes are changed, added, removed or if links have been added or removed
        std::vector<std::unique_ptr<UINodeBase>> nodes;     ///< Contains all the Nodes in the Node-Tree

        void Render();      ///< Renders the Node-Editor
    };
}
#endif //SYNTHCREATOR_NODEWIDGET_H