//
// Created by clemens on 15.12.25.
//

#include "ui/widgets/nodes/UINodeAttribute.h"

#include <random>
#include <vector>


UI::UINodeAttribute::UINodeAttribute(int id, AttributeType type, AttributeIO io, std::string name) {
    this->id = id;
    this->name = std::move(name);
    this->type = type;
    this->io = io;
}

UI::UINodeAttribute::UINodeAttribute(AttributeType type, AttributeIO io, std::string name) {
    this->id = get_unique_id();
    this->name = std::move(name);
    this->type = type;
    this->io = io;
}

int UI::get_unique_id() {
    static std::vector<int> used_ids;
    static std::random_device rd;
    static std::mt19937 mt(rd());
    std::uniform_int_distribution dist(INT32_MIN, INT32_MAX);

    while (true) {
        const int random_id = dist(mt);

        bool duplicate = false;
        for (const int used_id : used_ids) {if (used_id == random_id) duplicate = true;}

        if (!duplicate) {
            used_ids.push_back(random_id);
            return random_id;
        }
    }
}
