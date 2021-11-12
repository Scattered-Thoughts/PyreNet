#include "Linear.h"

namespace PyreNet {
    const double Linear::activate(double input) {
        return input;
    }

    const LayerDefinition::activationType Linear::type() {
        return LayerDefinition::activationType::linear;
    }
};