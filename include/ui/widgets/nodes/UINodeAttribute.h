//
// Created by clemens on 15.12.25.
//

#ifndef SYNTHCREATOR_UINODEATTRIBUTE_H
#define SYNTHCREATOR_UINODEATTRIBUTE_H
#include <string>

namespace NodeEditor {

    enum class AttributeType {
        CV,
        WAVE,
        PULSE,
        LOGIC
    };
    enum class AttributeIO {
        INPUT,
        OUTPUT
    };

    class UINodeAttribute {
    public:
        int id;
        AttributeType type;
        AttributeIO io;
        std::string name;

        UINodeAttribute(int id, AttributeType type, AttributeIO io, std::string name);
        UINodeAttribute(AttributeType type, AttributeIO io, std::string name);
    };

    int get_unique_id();
}

#endif //SYNTHCREATOR_UINODEATTRIBUTE_H