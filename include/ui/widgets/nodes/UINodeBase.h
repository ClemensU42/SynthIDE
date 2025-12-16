//
// Created by clemens on 15.12.25.
//

#ifndef SYNTHCREATOR_NODEBASE_H
#define SYNTHCREATOR_NODEBASE_H

#include <vector>

#include "imgui.h"

#include "ui/widgets/nodes/UINodeAttribute.h"

namespace UI {
    /**
     * Serves as the basis for all Nodes. Has no functionality on its own, but servers as the
     * Base Class for all other Nodes to inherit from.
     */
    class UINodeBase {
    public:
        int id;                                     ///< A unique ID for each Node in the Node-Tree
        std::vector<UINodeAttribute> attributes;    ///< A list of Attributes the Node has
        ImVec2 position;                            ///< The position of the Node in the Editor. Used for serialization

        virtual ~UINodeBase() = default;
        virtual void render() = 0;                  ///< Prototype of the function used for rendering. Overwrite in your Nodes!
    };
}

#endif //SYNTHCREATOR_NODEBASE_H