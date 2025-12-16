//
// Created by clemens on 15.12.25.
//

#ifndef SYNTHCREATOR_UINODEATTRIBUTE_H
#define SYNTHCREATOR_UINODEATTRIBUTE_H
#include <string>

namespace UI {
    /**
     * Specifies the type of the Attribute.
     * Only Attributes with the same type can be connected together!
     */
    enum class AttributeType {
        CV,
        WAVE,
        PULSE,
        LOGIC
    };

    /**
     * Specifies, it the Attribute is Input or Output.
     * Only opposite IO-Types can be connected, e.g. no Input can be connected to another Input.
     */
    enum class AttributeIO {
        INPUT,
        OUTPUT
    };

    /**
     * The UINodeAttribute is used as an IO-Port for a Node.
     */
    class UINodeAttribute {
    public:
        int id;                 ///< A unique ID to each attribute in the Node-Tree
        AttributeType type;     ///< The type this Attribute has
        AttributeIO io;         ///< The type of IO this Attribute is
        std::string name;       ///< The name this Attribute has. It will be displayed on the node!

        UINodeAttribute(int id, AttributeType type, AttributeIO io, std::string name);
        UINodeAttribute(AttributeType type, AttributeIO io, std::string name);
    };

    /**
     * Creates a unique ID for any Attribute or Node in the graph.
     * @return A unique ID that has not yet been used in the graph
     */
    int get_unique_id();
}

#endif //SYNTHCREATOR_UINODEATTRIBUTE_H