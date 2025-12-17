//
// Created by clemens on 17.12.25.
//

#ifndef SYNTHCREATOR_WAVEFORMSYNTH_H
#define SYNTHCREATOR_WAVEFORMSYNTH_H

#include "ui/widgets/nodes/UINodeBase.h"

namespace UI {
    class WaveformSynth : public UINodeBase {
    public:
        WaveformSynth();
        void render() override;
    };
}

#endif //SYNTHCREATOR_WAVEFORMSYNTH_H