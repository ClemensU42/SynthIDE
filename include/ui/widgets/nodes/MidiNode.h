//
// Created by clemens on 15.12.25.
//

#ifndef SYNTHCREATOR_MIDINODE_H
#define SYNTHCREATOR_MIDINODE_H

#include "ui/widgets/nodes/UINodeBase.h"
namespace UI {
    /**
     * To be implemented...
     *
     * see Issue #6
     */
    class MidiNode : public UINodeBase {
    public:
        MidiNode();
        void render() override;
    };
}

#endif //SYNTHCREATOR_MIDINODE_H